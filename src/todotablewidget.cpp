#include "todotablewidget.h"

TodoTableWidget::TodoTableWidget(QWidget *parent)
    : QWidget(parent),
      mSqlDatabase(QSqlDatabase::addDatabase("QSQLITE")),
      mSqlTableModel(new QSqlTableModel(this)),
      mSqlTableView(new QTableView(this)),
      mBtnAddTodo(new QPushButton("Add Todo", this)),
      mBtnDeleteTodo(new QPushButton("Delete Todo", this)),
      mBtnCompleteTodo(new QPushButton("Complete Todo", this)) {
    //* Sql Database
    mSqlDatabase.setDatabaseName("todone.db");
    if (!mSqlDatabase.open()) qDebug() << "cant open todone.db";

    //* Sql List
    QSqlQuery query;
    query.exec(
        "create table todolist (id integer primary key,\
         todo text not null,\
          priority text not null,\
          deadline text not null,\
          reminder text,\
          note text)");

    //* Sql Model
    mSqlTableModel->setTable("todolist");
    mSqlTableModel->setEditStrategy(QSqlTableModel::OnFieldChange);
    mSqlTableModel->select();

    sortByPriority();

    //* Table View
    mSqlTableView->setModel(mSqlTableModel);
    mSqlTableView->hideColumn(0);  // hide id
    mSqlTableView->setFont(mBaseFont);
    mSqlTableView->setColumnWidth(2, 90);
    mSqlTableView->setColumnWidth(3, 180);
    mSqlTableView->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    mSqlTableView->setStyleSheet("QTableView { border: 0px solid black; }");
    // DataTimeDelegate
    DateTimeDelegate *deadline = new DateTimeDelegate(this);
    mSqlTableView->setItemDelegateForColumn(3, deadline);
    // PriorityDelegate
    PriorityDelegate *priority = new PriorityDelegate(this);
    mSqlTableView->setItemDelegateForColumn(2, priority);

    //* Layout
    QVBoxLayout *vSqlLayout = new QVBoxLayout();
    QHBoxLayout *hBtnLayout = new QHBoxLayout();
    vSqlLayout->setSpacing(0);
    hBtnLayout->setSpacing(0);
    vSqlLayout->setContentsMargins(0, 0, 0, 0);
    hBtnLayout->setContentsMargins(0, 0, 0, 0);

    hBtnLayout->addWidget(mBtnAddTodo);
    hBtnLayout->addWidget(mBtnDeleteTodo);
    hBtnLayout->addWidget(mBtnCompleteTodo);

    vSqlLayout->addWidget(mSqlTableView);
    vSqlLayout->addLayout(hBtnLayout);

    setLayout(vSqlLayout);

    //* connect
    connect(mBtnAddTodo, &QPushButton::clicked, this, &TodoTableWidget::insertTodo);
    connect(mBtnDeleteTodo, &QPushButton::clicked, this, &TodoTableWidget::deleteTodo);
    connect(mSqlTableView, &QTableView::clicked, this, &TodoTableWidget::onCellSelected);
    // connect(mSqlTableModel, &QSqlTableModel::dataChanged, this, &TodoTableWidget::sortByPriority);
}

TodoTableWidget::~TodoTableWidget() { mSqlDatabase.close(); }

void TodoTableWidget::insertTodo() {
    int curRow = mSqlTableModel->rowCount();
    qDebug() << curRow;
    mSqlTableModel->insertRow(curRow);
    qDebug() << mSqlTableModel->rowCount();

    QString curTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm");
    mSqlTableModel->setData(mSqlTableModel->index(curRow, 1), "");
    mSqlTableModel->setData(mSqlTableModel->index(curRow, 2), "\u5f85\u529e");  // priority
    mSqlTableModel->setData(mSqlTableModel->index(curRow, 3), curTime);         // deadline
    mSqlTableModel->setData(mSqlTableModel->index(curRow, 4), "");              // reminder
    mSqlTableModel->setData(mSqlTableModel->index(curRow, 5), "");              // note
}

void TodoTableWidget::deleteTodo() {
    int curRow = mSqlTableView->currentIndex().row();
    mSqlTableModel->removeRow(curRow);
    mSqlTableModel->submitAll();
    mSqlTableModel->select();  // refresh :-)
}

void TodoTableWidget::completeTodo() {
    // TODO
}

void TodoTableWidget::onCellSelected(const QModelIndex &index) {
    qDebug() << "Cell Selected row:" << index.row() << ",column:" << index.column();
    int rowHeight = mSqlTableView->rowHeight(index.row());

    qDebug() << "Row Height:" << rowHeight;

    mBtnDeleteTodo->setEnabled(true);
}

void TodoTableWidget::sortByPriority() {
    if (mSqlTableModel->rowCount() != 0) {
        qDebug() << "sortByPriority";
        mSqlTableModel->setSort(2, Qt::AscendingOrder);
        mSqlTableModel->select();
    }
}