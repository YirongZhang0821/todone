#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <QHBoxLayout>
#include <QHeaderView>
#include <QTabWidget>
#include <QTableView>
#include <QVBoxLayout>
#include <QWidget>

#include "todotablewidget.h"

#define TODONE_VERSION_MAIN "1"
#define TODONE_VERSION_MODE "0"

class Structure : public QWidget {
    Q_OBJECT
public:
    explicit Structure(QWidget *parent = nullptr);
    ~Structure();

private:
    QFont mBaseFont = QFont("Monaco Nerd Font, fangsong_gb2312", 12);
    TodoTableWidget *mTodoTableWidget;
    QTabWidget *mTabWidget;
};
#endif