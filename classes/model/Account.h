#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include <string>
#include <vector>
#include "Date.h"

using namespace std;
class Account
{
public:
    virtual	~Account() = 0 {};

    virtual const string& getLogin() = 0;
    virtual const string& getPassword() = 0;

    virtual bool getMoney(int quantity) = 0;
    virtual bool putMoney(int quantity) = 0;
    virtual inline const int checkBalance() const = 0;


};
