#ifndef GLOBAL_DETEGATE_H
#define GLOBAL_DETEGATE_H

#include <QComboBox>
#include <QDateTimeEdit>
#include <QPainter>
#include <QStyledItemDelegate>

class GlobalDelegate : public QStyledItemDelegate {
    Q_OBJECT
public:
    explicit GlobalDelegate(QObject *parent = nullptr);

    /*
     * @brief If the to-do list is urgent, red
     ! discard
     */
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override;

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const override;
};
#endif