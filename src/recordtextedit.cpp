#include "recordtextedit.h"

#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

RecordTextEdit::RecordTextEdit(QWidget *parent) : QWidget(parent), mRecordTextEdit(new QTextEdit(this)) {
    mRecordTextEdit->setFont(mBaseFont);

    // layout
    QVBoxLayout *vEditLayout = new QVBoxLayout();
    vEditLayout->setSpacing(0);
    vEditLayout->setContentsMargins(0, 0, 0, 0);

    vEditLayout->addWidget(mRecordTextEdit);
    setLayout(vEditLayout);

    loadRecord();
    connect(mRecordTextEdit, &QTextEdit::textChanged, this, &RecordTextEdit::saveRecord);
}

RecordTextEdit::~RecordTextEdit() {}

void RecordTextEdit::saveRecord() {
    QSqlQuery query;
    query.prepare("INSERT INTO records (content) VALUES (:content)");
    query.bindValue(":content", mRecordTextEdit->toPlainText());
    if (!query.exec()) {
        qDebug() << "Error inserting into records table:" << query.lastError();
    }
}

void RecordTextEdit::loadRecord() {
    QSqlQuery query("SELECT content FROM records ORDER BY id DESC LIMIT 1");
    if (query.next()) {
        mRecordTextEdit->setPlainText(query.value(0).toString());
    } else {
        qDebug() << "Error loading from records table:" << query.lastError();
    }
}