#include "LoginScreenHandler.h"
#include <iostream>

LoginScreenHandler::LoginScreenHandler(Controller &master):
    _master(master)
{
}

void LoginScreenHandler::okClicked ()
{
    std::cout << "Login Screen halndler: ok clicked" << std::endl;
    _master.openWindow(Windows::ChooseAction);
}

LoginScreenHandler::~LoginScreenHandler ()
{

}
void LoginScreenHandler::backspaceClicked ()
{

}
