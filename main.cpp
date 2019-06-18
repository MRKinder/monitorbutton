#include "monitorbuttons.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    monitorbuttons w;
    w.show();

    return a.exec();
}
