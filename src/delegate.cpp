#include "delegate.h"

DateTimeDelegate::DateTimeDelegate(QObject *parent) : QStyledItemDelegate(parent) {}

QWidget *DateTimeDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                        const QModelIndex &index) const {
    QDateTimeEdit *editor = new QDateTimeEdit(parent);
    editor->setDisplayFormat("yyyy-MM-dd HH:mm");
    editor->setCalendarPopup(true);
    return editor;
}

void DateTimeDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    QDateTimeEdit *dateTimeEdit = static_cast<QDateTimeEdit *>(editor);
    QString dateTimeStr = index.model()->data(index, Qt::EditRole).toString();
    QDateTime dateTime = QDateTime::fromString(dateTimeStr, "yyyy-MM-dd HH:mm");
    dateTimeEdit->setDateTime(dateTime);
}

void DateTimeDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
    QDateTimeEdit *dateTimeEdit = static_cast<QDateTimeEdit *>(editor);
    QDateTime dateTime = dateTimeEdit->dateTime();
    model->setData(index, dateTime.toString("yyyy-MM-dd HH:mm"), Qt::EditRole);
}

void DateTimeDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                                            const QModelIndex &index) const {
    editor->setGeometry(option.rect);
}

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