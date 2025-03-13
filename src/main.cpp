#include <QApplication>
#include <QSharedMemory>

#include "structure.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QSharedMemory todone;
    todone.setKey("todone_unique");
    if (!todone.create(1)) return 0;
    Structure s;
    s.show();
    return app.exec();
}