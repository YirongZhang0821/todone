#ifndef TODO_TABLE_WIDGET_H
#define TODO_TABLE_WIDGET_H

#include <QDateTime>
#include <QDateTimeEdit>
#include <QFont>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QPushButton>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QTableView>
#include <QVBoxLayout>
#include <QWidget>

#include "datatimedelegate.h"
#include "prioritydelegate.h"

class TodoTableWidget : public QWidget {
    Q_OBJECT
public:
    explicit TodoTableWidget(QWidget *parent = nullptr);
    ~TodoTableWidget();

private:
    QSqlDatabase mSqlDatabase;
    QSqlTableModel *mSqlTableModel;
    QTableView *mSqlTableView;

    QPushButton *mBtnAddTodo;
    QPushButton *mBtnDeleteTodo;
    QPushButton *mBtnCompleteTodo;

    QFont mBaseFont = QFont("Monaco Nerd Font, fangsong_gb2312", 12);

    void insertTodo();
    void deleteTodo();
    void completeTodo();
    void onCellSelected(const QModelIndex &index);
    void sortByPriority();
};
#endif