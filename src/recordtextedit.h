#ifndef RECORD_TEXT_EDIT_H
#define RECORD_TEXT_EDIT_H

#include <QTextEdit>
#include <QVBoxLayout>

class RecordTextEdit : public QWidget {
    Q_OBJECT
public:
    explicit RecordTextEdit(QWidget *parent = nullptr);
    ~RecordTextEdit();

private:
    QTextEdit *mRecordTextEdit;

    QFont mBaseFont = QFont("Monaco Nerd Font, fangsong_gb2312", 12);
};

#endif