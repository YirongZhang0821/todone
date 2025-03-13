#ifndef GLOBAL_DETEGATE_H
#define GLOBAL_DETEGATE_H

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
};
#endif