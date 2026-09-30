#include "robotcontrolstation.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RobotControlStation w;
    w.show();
    return a.exec();
}
