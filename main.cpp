#include "wmttool.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WMTtool w;
    w.show();

    return a.exec();
}
