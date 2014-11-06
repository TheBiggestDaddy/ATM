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


#include <iostream>

Controller::Controller(MainWindow& w):
    _window(w),
    _current_frame(new LoginScreen()),
    _state(Windows::LoginScreen),
    _current_screen_handler(new LoginScreenHandler(*this))
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

void Controller::openWindow(const Windows::Window& screen)
{
    switch (screen)
    {
    case Windows::LoginScreen:
    {
        delete _current_screen_handler;
        _current_screen_handler = new LoginScreenHandler(*this);
        break;
    }
    case Windows::ChooseAction:
    {
        delete _current_screen_handler;
        _current_screen_handler = new ChooseActionHandler(*this);
        break;
    }
    default:
        break;
    }
}
