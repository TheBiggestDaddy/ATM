/*
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include "CreditAccount.h"
#include "Customer.h"
#include "Date.h"

using namespace std;

CreditAccount::CreditAccount(Customer& c, size_t limit, string login, string pass)
    :_owner(&c),
      _limit(limit),
     _gettedMoney(0),
     _accountNumber(login),
     _password(pass),
     _history(0),
     _startDate(),
     _endDate()
{
    _endDate.setYear(_endDate.year()+1);
};

CreditAccount::~CreditAccount()
{
    _owner = 0;
};

bool CreditAccount::getMoney(size_t quantity)
{
    if((_limit - _gettedMoney)>0)
    {
        addActionToHistory("Get money: "+_startDate.getDefault()+" - "+to_string(quantity));
        _gettedMoney+=quantity;        
        return true;
    }else return false;
};

bool CreditAccount::putMoney(size_t quantity)
{    
    addActionToHistory("Put money: "+_startDate.getDefault()+" - "+to_string(quantity));
    _gettedMoney-=quantity;
    return true;
};

void CreditAccount::addActionToHistory(const string& action)
{
    _history.push_back(action);
};
