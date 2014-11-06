#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QFrame>
#include <QObject>
#include "gui/MainWindow.h"
#include "gui/Windows.h"


#include "controller/AddMoneyToMobileAccountHandler.h"
#include "controller/AnotherCashHandler.h"
#include "controller/CashingHandler.h"
#include "controller/ChooseActionHandler.h"
#include "controller/LoginScreenHandler.h"
#include "controller/ScreenHandler.h"

class Controller: public QObject
{
public:
    friend class LoginScreenHandler;
    friend class AddMoneyToMobileAccountHandler;
    friend class AnotherCashHandler;
    friend class CashingHandler;
    friend class ChooseActionHandler;

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

    void openWindow(const Windows::Window& screen);
};

#endif // CONTROLLER_H
