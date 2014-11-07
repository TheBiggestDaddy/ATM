
#include "LoginScreenHandler.h"
#include "../gui/LoginScreen.h"
#include <iostream>
#include <QTimer>
#include <QObject>
#include <QLineEdit>

LoginScreenHandler::LoginScreenHandler(Controller &master):
    _master(master)
{
}

void LoginScreenHandler::okClicked ()
{
    std::cout << "Login Screen halndler: ok clicked" << std::endl;
    LoginScreen* screen = static_cast<LoginScreen*>(_master._current_frame);
    if(isNumber(screen->getCardNumberLine()->text().toStdString()) &&
            isNumber(screen->getPinLine()->text().toStdString()))
    {
        _master.openWindow(Windows::ChooseAction);
    }
    else
    {
        screen->setErrorStatus(true);
    }
}

void LoginScreenHandler::left3clicked ()
{
    LoginScreen* screen = static_cast<LoginScreen*>(_master._current_frame);
    QTimer::singleShot(0, screen->getCardNumberLine(), SLOT(setFocus()));
}
void LoginScreenHandler::left2clicked ()
{
    LoginScreen* screen = static_cast<LoginScreen*>(_master._current_frame);
    QTimer::singleShot(0, screen->getPinLine(), SLOT(setFocus()));
}

void LoginScreenHandler::right3clicked ()
{
    LoginScreen* screen = static_cast<LoginScreen*>(_master._current_frame);
    QTimer::singleShot(0, screen->getCardNumberLine(), SLOT(setFocus()));
}

void LoginScreenHandler::right2clicked ()
{
    LoginScreen* screen = static_cast<LoginScreen*>(_master._current_frame);
    QTimer::singleShot(0, screen->getPinLine(), SLOT(setFocus()));
}

LoginScreenHandler::~LoginScreenHandler ()
{

}
void LoginScreenHandler::backspaceClicked ()
{
    _master.openWindow(Windows::LoginScreen);
}
