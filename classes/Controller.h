#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QFrame>
#include <QObject>
#include "gui/MainWindow.h"
#include "gui/Windows.h"

class Controller: public QObject
{
public:
    Controller(MainWindow& w);
private:
    MainWindow& _window;
    QFrame* _current_frame;
    void onOkClicked();
    Windows::Window _state;
};

#endif // CONTROLLER_H
