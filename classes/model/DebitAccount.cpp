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
     _password(pass),
     _history(0),
     _startDate(),
     _endDate()
{
    _endDate.setYear(_endDate.year()+1);
};

DebitAccount::~DebitAccount()
{
    _owner = 0;
};

bool DebitAccount::getMoney(size_t quantity)
{
    if(_leftAmount>quantity)
    {
        addActionToHistory("Get money: "+_startDate.getDefault()+" - "+to_string(quantity));
        _leftAmount-=quantity;
        return true;
    }else return false;
};

bool DebitAccount::putMoney(size_t quantity)
{
    addActionToHistory("Put money: "+_startDate.getDefault()+" - "+to_string(quantity));
    if(_leftAmount += quantity)
        return true;
    else return false;
};

void DebitAccount::addActionToHistory(const string& action)
{
    _history.push_back(action);
};

