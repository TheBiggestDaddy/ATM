/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "InformationHandler.h"

InformationHandler::InformationHandler(Controller &master):
    _master(master)
{

}

InformationHandler::~InformationHandler ()
{

}
void InformationHandler::backspaceClicked ()
{
    _master.clearPassword();
    _master.openWindow(Windows::LoginScreen);
}

void InformationHandler::right1clicked()
{
    _master.clearPassword();
    _master.openWindow(Windows::Continue);
}
