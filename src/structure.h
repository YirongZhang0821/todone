#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <QDateTime>
#include <QFont>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QTabWidget>
#include <QTableView>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class root;
}
QT_END_NAMESPACE

#define TODONE_VERSION_MAIN "1"
#define TODONE_VERSION_MODE "0"

class Structure : public QWidget {
    Q_OBJECT
public:
    explicit Structure(QWidget* parent = nullptr);
    ~Structure();

private:
    Ui::root* ui;
    QSqlDatabase mSqlDatabase;

    QSqlTableModel* mDoingSqlTableModel;
    QSqlTableModel* mAchieveSqlTableModel;
    QSqlTableModel* mDiscardSqlTableModel;

    QFont mBaseFont = QFont("Monaco Nerd Font, fangsong_gb2312", 12);

    void setupSqlTableModels();
    void setupSqlTableModel(QSqlTableModel* model, const QString& filter, QTableView* view);

    void addTodoDoing();
    void achieveTodoDoing();
    void discardTodoDoing();

    void setTodoDoing();
    void setTodoDiscard();

    void deleteTodoDiscard();

    void updateTodoStatus(QSqlTableModel* model, QTableView* view, int status);
};
#endif