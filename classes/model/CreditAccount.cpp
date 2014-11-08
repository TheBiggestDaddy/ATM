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

CreditAccount::CreditAccount(Customer& c, int limit, string login, string pass)
    :_owner(&c),
      _limit(limit),
     _gettedMoney(0),
     _accountNumber(login),
     _password(pass)
{
};

CreditAccount::~CreditAccount()
{
    _owner = 0;
};

bool CreditAccount::getMoney(int quantity)
{
    if((_limit - _gettedMoney)>0)
    {
        _gettedMoney+=quantity;        
        return true;
    }else return false;
};

bool CreditAccount::putMoney(int quantity)
{
    _gettedMoney-=quantity;
    return true;
};
