#include "SuccessScreenHandler.h"

SuccessScreenHandler::SuccessScreenHandler(Controller& master):
    _master(master)
{
}


SuccessScreenHandler::~SuccessScreenHandler ()
{

}

void SuccessScreenHandler::backspaceClicked ()
{
    _master.openWindow(Windows::ChooseAction);
}

void SuccessScreenHandler::right2clicked ()
{
    _master.openWindow(Windows::ChooseAction);
}

void SuccessScreenHandler::right1clicked ()
{
    _master.openWindow(Windows::LoginScreen);
}
