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

//connect(sender, SIGNAL(destroyed(QObject*)), this, SLOT(objectDestroyed(Qbject*)));
//connect(sender, SIGNAL(destroyed(QObject*)), this, SLOT(objectDestroyed()));
//connect(sender, SIGNAL(destroyed()), this, SLOT(objectDestroyed()));

Controller::Controller(MainWindow& w):
    _window(w),
    _current_frame(new LoginScreen()),
    _state(Windows::LoginScreen)
{
    _window.addFrameChild(_current_frame);

    connect(&_window,&MainWindow::signal_OK_clicked,this,&Controller::onOkClicked);
}

void Controller::onOkClicked ()
{
    switch (_state)
    {
    case Windows::LoginScreen:
        std::cout << "FUCK YEAH!" << std::endl;
        if(true)
        {
            delete _current_frame;
            _current_frame = new ChooseAction();
            _window.addFrameChild(_current_frame);
        }
        break;
    default:
        std::cout << "FUCK!" << std::endl;
    }
}
