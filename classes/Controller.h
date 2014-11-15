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
    friend class CashingHandler;
    friend class AnotherCashHandler;
    friend class AddMoneyToMobileAccountHandler;
    friend class SendMoneyToAnotherCardHandler;

    Controller(MainWindow& w);
    ~Controller();

    void openWindow(const Windows::Window& screen);
    QFrame* getCurrentFrame() const;
    void clearPassword();
    void setLogin(const QString login);
    bool confirmPassword(const QString password);
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

    const Bank _UKROP_BANK;
    ATM* _current_account;
    bool isValidAccount();
    //Converting int to string
    static int convertToInt(const std::string& s);
};

#endif // CONTROLLER_H
