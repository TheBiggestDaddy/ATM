#include "ScreenHandler.h"
#include <iostream>


ScreenHandler::ScreenHandler()
{

}

void ScreenHandler::left4clicked ()
{
    std::cout << "Default halndler: left button 4 clicked" << std::endl;
}
void ScreenHandler::left3clicked ()
{
    std::cout << "Default halndler: left button 3 clicked" << std::endl;
}
void ScreenHandler::left2clicked ()
{
    std::cout << "Default halndler: left button 2 clicked" << std::endl;
}
void ScreenHandler::left1clicked ()
{
    std::cout << "Default halndler: left button 1 clicked" << std::endl;
}

void ScreenHandler::right4clicked ()
{
    std::cout << "Default halndler: right button 4 clicked" << std::endl;
}
void ScreenHandler::right3clicked ()
{
    std::cout << "Default halndler: right button 3 clicked" << std::endl;
}
void ScreenHandler::right2clicked ()
{
    std::cout << "Default halndler: right button 2 clicked" << std::endl;
}
void ScreenHandler::right1clicked ()
{
    std::cout << "Default halndler: right button 1 clicked" << std::endl;
}

void ScreenHandler::okClicked ()
{
    std::cout << "Default halndler: ok clicked" << std::endl;
}
void ScreenHandler::backspaceClicked ()
{
    std::cout << "Default halndler: backspace clicked" << std::endl;
}

 bool ScreenHandler::isNumber(std::string& string)
 {
     if(string.length() == 0)
     {
         return false;
     }
    for(size_t i = 0; i < string.size(); i++)
    {
        if(string.at(i) != '0')
            if(string.at(i) < '1' || string.at(i) > '9')
            {
                return false;
            }
    }
    return true;
 }
