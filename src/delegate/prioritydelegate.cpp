#include "prioritydelegate.h"

#include <QComboBox>

PriorityDelegate::PriorityDelegate(QObject *parent) : QStyledItemDelegate(parent) { mUrgentlyFont.setBold(true); }

QWidget *PriorityDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                        const QModelIndex &index) const {
    QComboBox *editor = new QComboBox(parent);
    editor->addItem("\u7d27\u6025", "\u7d27\u6025");  // urgently
    editor->addItem("\u5f85\u529e", "\u5f85\u529e");  // normally

    return editor;
}

void PriorityDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    QComboBox *comboBox = static_cast<QComboBox *>(editor);
    QString priority = index.model()->data(index, Qt::EditRole).toString();
    comboBox->setCurrentIndex(comboBox->findData(priority));
}

void PriorityDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
    QComboBox *comboBox = static_cast<QComboBox *>(editor);
    QString priority = comboBox->currentData().toString();
    model->setData(index, priority, Qt::EditRole);
}

void PriorityDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                                            const QModelIndex &index) const {
    editor->setGeometry(option.rect);
}

void PriorityDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const {
    qDebug() << "\n" << index << index.model();
    //* index.model() is QSqlTableModel
    if (index.column() == 2) {  // priority
        QString priority = index.data().toString();
        if (priority == "\u7d27\u6025") {
            painter->setPen(Qt::red);
        } else {
            painter->setPen(Qt::black);
        }
        painter->drawText(option.rect, Qt::AlignCenter, priority);
    }
}