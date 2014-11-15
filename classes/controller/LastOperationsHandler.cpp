/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "LastOperationsHandler.h"

LastOperationsHandler::LastOperationsHandler(Controller& master):
    _master(master)
{

}

LastOperationsHandler::~LastOperationsHandler ()
{

}

void LastOperationsHandler::backspaceClicked ()
{
    _master.clearPassword();
    _master.openWindow(Windows::LoginScreen);
}

void LastOperationsHandler::okClicked()
{
    _master.clearPassword();
    _master.openWindow(Windows::Continue);
}
