/*
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include <string>
#include "Customer.h"
#include "CreditAccount.h"
#include "DebitAccount.h"

using namespace std;

Customer::Customer(const string& name, const string& surname, const string& address)
    :_name(name),
     _surname(surname),
     _address(address),
     _debitAccount(0),
     _creditAccount(0)
{
};

Customer::~Customer()
{
    if(_debitAccount == 0)
        delete _debitAccount;
    if(_creditAccount == 0)
        delete _creditAccount;
}

bool Customer::addDebitAccount(string login, string pass)
{
    if(_debitAccount == 0)
    {
        _debitAccount = new DebitAccount(*this, login, pass);
        return true;
    }
    else return false;
};

bool Customer::addCreditAccount(size_t limit, string login, string pass)
{
    if(_creditAccount == 0)
    {
        _creditAccount = new CreditAccount(*this, limit, login, pass);
        return true;
    }
    else return false;
};


bool operator==(const Customer& a, const Customer& b)
{
    return a.name() == b.name() && a.surname() == b.surname() && a.address() == b.address();
};

bool operator!=(const Customer& a, const Customer& b)
{
    return !(a==b);
};
