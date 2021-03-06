/*
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include <string>
#include "ATM.h"

using namespace std;

ATM::ATM(const Bank& b,const string& login, const string& password)
    :_bank(&b),
     _account(&(_bank->getAccount(login, password)))
{
};

ATM::~ATM()
{
    _bank = 0;
    _account = 0;
};


bool ATM::sendToAccount(const string& accountNumber, size_t amount)
{
    return _bank->makeTransaction(*_account, accountNumber, amount);
};

vector<string>& ATM::getHistory()
{
    return _account->getHistory();
};
