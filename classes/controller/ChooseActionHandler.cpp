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
    std::cout << "ChooseAction halndler: left button 3 clicked" << std::endl;
}
void ChooseActionHandler::left2clicked ()
{
    std::cout << "ChooseAction halndler: left button 2 clicked" << std::endl;
}
void ChooseActionHandler::left1clicked ()
{
    std::cout << "ChooseAction halndler: left button 1 clicked" << std::endl;
}

void ChooseActionHandler::right4clicked ()
{
    std::cout << "ChooseAction halndler: right button 4 clicked" << std::endl;
}
void ChooseActionHandler::right3clicked ()
{
    std::cout << "ChooseAction halndler: right button 3 clicked" << std::endl;
}
void ChooseActionHandler::right2clicked ()
{
    std::cout << "ChooseAction halndler: right button 2 clicked" << std::endl;
}
void ChooseActionHandler::right1clicked ()
{
    std::cout << "ChooseAction halndler: right button 1 clicked" << std::endl;
}
