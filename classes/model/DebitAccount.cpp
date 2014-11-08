/*
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include "Account.h"
#include "DebitAccount.h"
#include "Customer.h"
#include "Date.h"

using namespace std;

DebitAccount::DebitAccount(Customer& c, string login, string pass)
    :_owner(&c),
     _leftAmount(0),
     _accountNumber(login),
     _password(pass)
{
};

DebitAccount::~DebitAccount()
{
    _owner = 0;
};

bool DebitAccount::getMoney(int quantity)
{
    if(_leftAmount>quantity)
    {
        _leftAmount-=quantity;
        return true;
    }else return false;
};

bool DebitAccount::putMoney(int quantity)
{
    if(_leftAmount += quantity)
        return true;
    else return false;
};
