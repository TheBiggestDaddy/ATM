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

#include "controller/InformationHandler.h"
#include "controller/LastOperationsHandler.h"
#include "controller/SendMoneyToAnotherCardHandler.h"
#include "controller/SuccessScreenHandler.h"
#include "controller/FailedScreenHandler.h"
#include "controller/ContinueScreenHandler.h"
#include "model/ATM.h"
#include "model/Bank.h"
/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
class Controller: public QObject
{
public:
    friend class LoginScreenHandler;
    friend class AddMoneyToMobileAccountHandler;
    friend class AnotherCashHandler;
    friend class CashingHandler;
    friend class ChooseActionHandler;
    friend class InformationHandler;
    friend class LastOperationsHandler;
    friend class SendMoneyToAnotherCardHandler;
    friend class SuccessScreenHandler;
    friend class FailedScreenHandler;
    friend class ContinueScreenHandler;

    Controller(MainWindow& w);
    ~Controller();
private:
    QString _login;
    QString _password;
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
    static const Bank _UKROP_BANK;
    ATM* _current_account;
    bool isValidAccount();
    //Converting int to string
    static int convertToInt(const std::string& s);
};

#endif // CONTROLLER_H
