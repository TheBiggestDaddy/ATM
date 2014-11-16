#include "Controller.h"
#include <QApplication>
#include "gui/MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Controller controller(w);
    controller;

    return a.exec();
}
