#ifndef PRIORITY_DELEGATE_H
#define PRIORITY_DELEGATE_H

#include <QComboBox>
#include <QPainter>
#include <QStyledItemDelegate>

class PriorityDelegate : public QStyledItemDelegate {
    Q_OBJECT

public:
    explicit PriorityDelegate(QObject *parent = nullptr);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const override;
    /*
     * @brief If the to-do list is urgent, red
     * At first this is written in globaldelegate.cpp,
     * then set by mSqlTableView->setItemDelegate(global)
     * but setItemDelegateForColumn() has higher priority
     * than setItemDelegate() :-(, so it is written here
     */
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;

private:
    QFont mUrgentlyFont = QFont("Monaco Nerd Font, fangsong_gb2312", 12);
};

#endif