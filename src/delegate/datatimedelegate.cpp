#include "datatimedelegate.h"

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