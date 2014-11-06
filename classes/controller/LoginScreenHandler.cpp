#include "LoginScreenHandler.h"
#include <iostream>

LoginScreenHandler::LoginScreenHandler(Controller &c)
{
}

void LoginScreenHandler::okClicked ()
{
    std::cout << "Login Screen halndler: ok clicked" << std::endl;
}

LoginScreenHandler::~LoginScreenHandler ()
{
    std::cout << "Login Screen halndler: destructor" << std::endl;
}
