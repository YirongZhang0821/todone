#include "recordtextedit.h"

RecordTextEdit::RecordTextEdit(QWidget *parent) : QWidget(parent), mRecordTextEdit(new QTextEdit(this)) {
    mRecordTextEdit->setFont(mBaseFont);

    // layout
    QVBoxLayout *vEditLayout = new QVBoxLayout();
    vEditLayout->setSpacing(0);
    vEditLayout->setContentsMargins(0, 0, 0, 0);

    vEditLayout->addWidget(mRecordTextEdit);
    setLayout(vEditLayout);
}

RecordTextEdit::~RecordTextEdit() {}