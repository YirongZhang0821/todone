#include "globaldelegate.h"

GlobalDelegate::GlobalDelegate(QObject *parent) : QStyledItemDelegate(parent) {}

void GlobalDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    QStyledItemDelegate::paint(painter, option, index);  // Drawing default cell contents
    qDebug() << index.column();
    if (index.column() == 2) {  // Priority column
        QString priority = index.data().toString();
        if (priority == "\u7d27\u6025") {
            qDebug() << "Global Red";
            painter->fillRect(option.rect, Qt::red);
        }
    }
}