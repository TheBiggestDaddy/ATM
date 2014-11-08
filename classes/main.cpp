#include "Controller.h"
#include <QApplication>
#include "gui/MainWindow.h"

int main1(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Controller controller(w);

    return a.exec();
}
