#ifndef PRIORITY_DELEGATE_H
#define PRIORITY_DELEGATE_H

#include <QComboBox>
#include <QItemDelegate>

class PriorityDelegate : public QItemDelegate {
    Q_OBJECT

public:
    explicit PriorityDelegate(QObject *parent = nullptr);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const override;
};

#endif