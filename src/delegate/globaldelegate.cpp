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

QWidget *GlobalDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                                      const QModelIndex &index) const {
    if (index.column() == 2) {  //* Priority
        QComboBox *editor = new QComboBox(parent);
        editor->addItem("\u7d27\u6025", "\u7d27\u6025");  // urgently
        editor->addItem("\u5f85\u529e", "\u5f85\u529e");  // normally
        return editor;
    } else if (index.column() == 3) {  //* Deadline
        QDateTimeEdit *editor = new QDateTimeEdit(parent);
        editor->setDisplayFormat("yyyy-MM-dd HH:mm");
        editor->setCalendarPopup(true);
        return editor;
    }
    return nullptr;
}

void GlobalDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const {
    if (index.column() == 2) {  //* Priority
        QComboBox *comboBox = static_cast<QComboBox *>(editor);
        QString priority = index.model()->data(index, Qt::EditRole).toString();
        comboBox->setCurrentIndex(comboBox->findData(priority));
    } else if (index.column() == 3) {  //* Deadline
        QDateTimeEdit *dateTimeEdit = static_cast<QDateTimeEdit *>(editor);
        QDateTime dateTime =
            QDateTime::fromString(index.model()->data(index, Qt::EditRole).toString(), "yyyy-MM-dd HH:mm");
        dateTimeEdit->setDateTime(dateTime);
    }
}

void GlobalDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
    if (index.column() == 2) {  //* Priority
        QComboBox *comboBox = static_cast<QComboBox *>(editor);
        QString priority = comboBox->currentData().toString();
        model->setData(index, priority, Qt::EditRole);
    } else if (index.column() == 3) {  //* Deadline
        QDateTimeEdit *dateTimeEdit = static_cast<QDateTimeEdit *>(editor);
        QDateTime dateTime = dateTimeEdit->dateTime();
        model->setData(index, dateTime.toString("yyyy-MM-dd HH:mm"), Qt::EditRole);
    }
}

void GlobalDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                                          const QModelIndex &index) const {
    editor->setGeometry(option.rect);
}