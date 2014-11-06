#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QFrame>
#include <QObject>
#include "gui/MainWindow.h"
#include "gui/Windows.h"

#include "controller/LoginScreenHandler.h"
#include "controller/ScreenHandler.h"

class Controller: public QObject
{
public:
    friend class LoginScreenHandler;

    Controller(MainWindow& w);
private:
    ScreenHandler* _current_screen_handler;
    MainWindow& _window;
    QFrame* _current_frame;
    Windows::Window _state;

    void onOkClicked ();
    void onBackspaceClicked ();

    void onLeftButton4Clicked ();
    void onLeftButton3Clicked ();
    void onLeftButton2Clicked ();
    void onLeftButton1Clicked ();

    void onRightButton4Clicked ();
    void onRightButton3Clicked ();
    void onRightButton2Clicked ();
    void onRightButton1Clicked ();

    void setHandler(const Windows::Window& screen);
};

#endif // CONTROLLER_H
