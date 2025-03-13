#ifndef DATA_TIME_DELEGATE_H
#define DATA_TIME_DELEGATE_H

#include <QDateTimeEdit>
#include <QStyledItemDelegate>

class DateTimeDelegate : public QStyledItemDelegate {
    Q_OBJECT
public:
    explicit DateTimeDelegate(QObject *parent = nullptr);
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const override;
};
#endif