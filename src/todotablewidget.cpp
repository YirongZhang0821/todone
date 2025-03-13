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
        "create table if not exists todolist (id integer primary key,\
         todo text not null,\
          priority text not null,\
          deadline text not null,\
          reminder text,\
          note text)");

    // TODO The creation of records table in not good here
    query.exec(
        "create table if not exists records (id integer primary key,\
         content text not null)");

    //* Sql Model
    mSqlTableModel->setTable("todolist");
    mSqlTableModel->setEditStrategy(QSqlTableModel::OnFieldChange);
    mSqlTableModel->select();

    // sortByPriority();
    // updateRowColors();

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
    // GlobalDelegate
    // GlobalDelegate *global = new GlobalDelegate(this);
    // mSqlTableView->setItemDelegate(global);

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
    // connect(mSqlTableModel, &QSqlTableModel::dataChanged, this, &TodoTableWidget::updateRowColors);
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

    updateRowColors();  // Update row colors after inserting a new row
}

void TodoTableWidget::deleteTodo() {
    int curRow = mSqlTableView->currentIndex().row();
    mSqlTableModel->removeRow(curRow);
    mSqlTableModel->submitAll();
    mSqlTableModel->select();  // refresh :-)

    updateRowColors();  // Update row colors after deleting a row
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

void TodoTableWidget::updateRowColors() {
    for (int row = 0; row < mSqlTableModel->rowCount(); ++row) {
        qDebug() << row;
        QModelIndex index = mSqlTableModel->index(row, 2);  // Priority column
        QString priority = mSqlTableModel->data(index).toString();
        qDebug() << "Priority:" << priority;
        if (priority == "\u7d27\u6025") {
            qDebug() << "Red";
            for (int col = 0; col < mSqlTableModel->columnCount(); ++col) {
                mSqlTableView->model()->setData(mSqlTableModel->index(row, col), QColor(Qt::red).lighter(160),
                                                Qt::BackgroundRole);
            }
        }
        // } else {
        //     for (int col = 0; col < mSqlTableModel->columnCount(); ++col) {
        //         mSqlTableView->model()->setData(mSqlTableModel->index(row, col), QColor(Qt::white),
        //         Qt::BackgroundRole);
        //     }
        // }
    }
}