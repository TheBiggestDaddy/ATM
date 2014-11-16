/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include <QApplication>
#include "Controller.h"
#include "gui/MainWindow.h"
#include "gui/AddMoneyToMobileAccount.h"
#include "gui/AnotherCash.h"
#include "gui/Cashing.h"
#include "gui/ChooseAction.h"
#include "gui/Information.h"
#include "gui/LastOperations.h"
#include "gui/LoginScreen.h"
#include "gui/SendMoneyToAnotherCard.h"
#include "gui/SuccessScreen.h"
#include "gui/FailedScreen.h"
#include "gui/ContinueScreen.h"
#include <sstream>

#include <iostream>

const Bank Controller::_UKROP_BANK;

Controller::Controller(MainWindow& w):
    _window(w),
    _current_frame(new LoginScreen()),
    _state(Windows::LoginScreen),
    _current_screen_handler(new LoginScreenHandler(*this)),
    _login(),
    _password(),
    _current_account(nullptr)
{
    _window.addFrameChild(_current_frame);

    connect(&_window,&MainWindow::signal_OK_clicked,this,&Controller::onOkClicked);
    connect(&_window,&MainWindow::signal_backspace_clicked,this,&Controller::onBackspaceClicked);

    connect(&_window,&MainWindow::signal_left_button_4_clicked,this,&Controller::onLeftButton4Clicked);
    connect(&_window,&MainWindow::signal_left_button_3_clicked,this,&Controller::onLeftButton3Clicked);
    connect(&_window,&MainWindow::signal_left_button_2_clicked,this,&Controller::onLeftButton2Clicked);
    connect(&_window,&MainWindow::signal_left_button_1_clicked,this,&Controller::onLeftButton1Clicked);

    connect(&_window,&MainWindow::signal_right_button_4_clicked,this,&Controller::onRightButton4Clicked);
    connect(&_window,&MainWindow::signal_right_button_3_clicked,this,&Controller::onRightButton3Clicked);
    connect(&_window,&MainWindow::signal_right_button_2_clicked,this,&Controller::onRightButton2Clicked);
    connect(&_window,&MainWindow::signal_right_button_1_clicked,this,&Controller::onRightButton1Clicked);
}

void Controller::onOkClicked ()
{
    _current_screen_handler->okClicked();
}

void Controller::onBackspaceClicked ()
{
    _current_screen_handler->backspaceClicked();
}

void Controller::onLeftButton4Clicked ()
{
    _current_screen_handler->left4clicked();
}

void Controller::onLeftButton3Clicked ()
{
    _current_screen_handler->left3clicked();
}

void Controller::onLeftButton2Clicked ()
{
    _current_screen_handler->left2clicked();
}

void Controller::onLeftButton1Clicked ()
{
    _current_screen_handler->left1clicked();
}

void Controller::onRightButton4Clicked ()
{
    _current_screen_handler->right4clicked();
}

void Controller::onRightButton3Clicked ()
{
    _current_screen_handler->right3clicked();
}

void Controller::onRightButton2Clicked ()
{
    _current_screen_handler->right2clicked();
}

void Controller::onRightButton1Clicked ()
{
    _current_screen_handler->right1clicked();
}

const std::string convert(const Date& d)
{
    std::string res;
    //res = d.day() + d.month() + d.year();
    return res;
}
void Controller::openWindow(const Windows::Window& screen)
{
    if(_current_frame != nullptr)
    {
        delete _current_frame;
    }
    if(_current_screen_handler != nullptr)
    {
        delete _current_screen_handler;
    }
    switch (screen)
    {
    case Windows::AddMoneyToMobileAccount:
    {
        _current_frame = new AddMoneyToMobileAccount ();
        _current_screen_handler = new AddMoneyToMobileAccountHandler (*this);
        break;
    }
    case Windows::AnotherCash:
    {
        _current_frame = new AnotherCash ();
        _current_screen_handler = new AnotherCashHandler (*this);
        break;
    }
    case Windows::Cashing:
    {
        _current_frame = new Cashing ();
        _current_screen_handler = new CashingHandler (*this);
        break;
    }
    case Windows::ChooseAction:
    {
        _current_frame = new ChooseAction ();
        _current_screen_handler = new ChooseActionHandler (*this);
        break;
    }
    case Windows::Information:
    {
        std::string start_date = convert(_current_account->getStartDate());
        std::string end_date = convert(_current_account->getStartDate());
        _current_frame = new Information (std::to_string(_current_account->leftMoney()),
                                          start_date,
                                          end_date);
        _current_screen_handler = new InformationHandler (*this);
        break;
    }
    case Windows::LastOperations:
    {
        _current_frame = new LastOperations (nullptr,_current_account->getHistory());
        _current_screen_handler = new LastOperationsHandler (*this);
        break;
    }
    case Windows::LoginScreen:
    {
        _login = QString();
        _password = QString();
        _current_frame = new LoginScreen ();
        _current_screen_handler = new LoginScreenHandler (*this);
        break;
    }
    case Windows::SendMoneyToAnotherCard:
    {
        _current_frame = new SendMoneyToAnotherCard ();
        _current_screen_handler = new SendMoneyToAnotherCardHandler (*this);
        break;
    }
    case Windows::Success:
    {
        _current_frame = new SuccessScreen ();
        _current_screen_handler = new SuccessScreenHandler (*this);
        break;
    }
    case Windows::Failed:
    {
        _current_frame = new FailedScreen ();
        _current_screen_handler = new FailedScreenHandler (*this);
        break;
    }
    case Windows::Continue:
    {
        _current_frame = new ContinueScreen ();
        _current_screen_handler = new ContinueScreenHandler (*this);
        break;
    }
    default:
        throw "Can`t detect screen! =(";
        break;
    }

    _window.addFrameChild (_current_frame);
}
bool Controller::isValidAccount()
{
    return _UKROP_BANK.isValidAccount(_login,_password);
}

Controller::~Controller()
{
    if(_current_account != nullptr)
    {
        delete _current_account;
    }
    if(_current_frame != nullptr)
    {
        delete _current_frame;
    }
    if(_current_screen_handler != nullptr)
    {
        delete _current_screen_handler;
    }
}
int Controller::convertToInt(const std::string& s)
{
    stringstream ss;
    ss << s;
    int rez = 0;
    ss >> rez;
    return rez;
}
