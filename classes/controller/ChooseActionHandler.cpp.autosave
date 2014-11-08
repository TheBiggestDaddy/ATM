/**********************
 * Dobrianskiy Andriy *
 * ****08.11.2014**** *
 * ********************/
#include "ChooseActionHandler.h"
#include <iostream>

ChooseActionHandler::ChooseActionHandler(Controller &master):
    _master(master)
{
}

void ChooseActionHandler::left4clicked ()
{
    std::cout << "ChooseAction halndler: left button 4 clicked" << std::endl;
}
void ChooseActionHandler::left3clicked ()
{
    _master.openWindow(Windows::Cashing);
    std::cout << "ChooseAction halndler: left button 3 clicked" << std::endl;
}
void ChooseActionHandler::left2clicked ()
{
     _master.openWindow(Windows::SendMoneyToAnotherCard);
    std::cout << "ChooseAction halndler: left button 2 clicked" << std::endl;
}
void ChooseActionHandler::left1clicked ()
{
     _master.openWindow(Windows::AddMoneyToMobileAccount);
    std::cout << "ChooseAction halndler: left button 1 clicked" << std::endl;
}

void ChooseActionHandler::right4clicked ()
{
    std::cout << "ChooseAction halndler: right button 4 clicked" << std::endl;
}
void ChooseActionHandler::right3clicked ()
{
     _master.openWindow(Windows::Information);
    std::cout << "ChooseAction halndler: right button 3 clicked" << std::endl;
}
void ChooseActionHandler::right2clicked ()
{
     _master.openWindow(Windows::LastOperations);
    std::cout << "ChooseAction halndler: right button 2 clicked" << std::endl;
}
void ChooseActionHandler::right1clicked ()
{
     _master.openWindow(Windows::LoginScreen);
    std::cout << "ChooseAction halndler: right button 1 clicked" << std::endl;
}

void ChooseActionHandler::backspaceClicked ()
{
    _master.openWindow(Windows::LoginScreen);
}

ChooseActionHandler::~ChooseActionHandler ()
{

}
