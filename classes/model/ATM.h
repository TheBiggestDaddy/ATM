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

    inline bool withdrawFunds(size_t _quantity) { return _account->getMoney(_quantity); };
    inline size_t leftMoney() { return _account->checkBalance(); };

    bool sendToPhone(string _phoneNumber, size_t _quantity) { return _account->getMoney(_quantity); };

    bool sendToAccount(const string& accountNumber, size_t amount);

    inline const Date& getStartDate() {return _account->getStartDate(); };
    inline const Date& getEndDate() { return _account->getEndDate(); };

    vector<string>& getHistory();
};
