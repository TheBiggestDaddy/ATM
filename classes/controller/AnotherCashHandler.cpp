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
    if(isNumber(screen->getSummLine()->text().toStdString()))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        screen->setErrorStatus(true);
    }
}
