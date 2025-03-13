#include "structure.h"

#include <QTextEdit>

Structure::Structure(QWidget* parent)
    : QWidget(parent), mTodoTableWidget(new TodoTableWidget(this)), mTabWidget(new QTabWidget(this)) {
    resize(800, 600);
    setMinimumSize(800, 600);
    setWindowTitle(QString("todone v") + TODONE_VERSION_MAIN + "." + TODONE_VERSION_MODE);

    mTabWidget->addTab(mTodoTableWidget, "todo");

    QVBoxLayout* vLayout = new QVBoxLayout(this);
    vLayout->setSpacing(0);
    vLayout->setContentsMargins(0, 0, 0, 0);
    vLayout->addWidget(mTabWidget);
}

Structure::~Structure() {}