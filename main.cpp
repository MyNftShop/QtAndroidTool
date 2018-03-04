#include "androidtoolwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AndroidToolWidget w;
    w.show();

    return a.exec();
}
