#include "AnotherCashHandler.h"
#include <iostream>

#include "../gui/AnotherCash.h"

AnotherCashHandler::AnotherCashHandler(Controller &master):
    _master(master)
{

}

AnotherCashHandler::~AnotherCashHandler ()
{

}

void AnotherCashHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}

void AnotherCashHandler::okClicked ()
{
    std::cout << "AnotherCash halndler: ok clicked" << std::endl;
    AnotherCash* screen = static_cast<AnotherCash*>(_master._current_frame);
    std::string summ = screen->getSummLine()->text().toStdString();
    if(isNumber(summ))
    {
        if(_master._current_account->withdrawFunds(Controller::convertToInt(summ)))
        {
            _master.openWindow(Windows::Success);
        }
        else
        {
            _master.openWindow(Windows::Failed);
        }
    }
    else
    {
        screen->setErrorStatus(true);
    }
}
