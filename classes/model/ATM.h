#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include <string>
#include "Bank.h"
#include "Account.h"

using namespace std;

class ATM
{
private:
    const Bank* _bank;
    Account* _account;

	ATM(const ATM&);
	ATM& operator=(const ATM&);

public:
    ATM(const Bank&, const string& login, const string& password);
	~ATM();	

    inline bool withdrawFunds(int _quantity) { return _account->getMoney(_quantity); };
    inline int leftMoney() { return _account->checkBalance(); };

    bool sendToPhone(string _phoneNumber, int _quantity) { return _account->getMoney(_quantity); };

    bool sendToAccount(const string& accountNumber, int amount);

    vector<string>& getHistory();
};
