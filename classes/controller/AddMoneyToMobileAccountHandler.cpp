#include "AddMoneyToMobileAccountHandler.h"

#include <iostream>

class AddMoneyToMobileAccount;

AddMoneyToMobileAccountHandler::AddMoneyToMobileAccountHandler(Controller &master):
    _master(master)
{

}

AddMoneyToMobileAccountHandler::~AddMoneyToMobileAccountHandler ()
{

}

void AddMoneyToMobileAccountHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}

void AddMoneyToMobileAccountHandler::okClicked ()
{
    std::cout << "AddMoneyToMobileAccount halndler: ok clicked" << std::endl;
    AddMoneyToMobileAccount* screen = static_cast<AddMoneyToMobileAccount*>(_master._current_frame);
    if(isNumber(screen->getMobileNumberLine()->text().toStdString()) &&
            isNumber(screen->getSummToTrunsferLine()->text().toStdString()))
    {
        _master.openWindow(Windows::Success);
    }
    else
    {
        screen->setErrorStatus(true);
    }
}
