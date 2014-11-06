#include "AddMoneyToMobileAccountHandler.h"

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
