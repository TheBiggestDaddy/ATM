#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include "Customer.h"
#include "Account.h"

using namespace std;

class Customer;
class CreditAccount: public Account
{
private:	
    Customer *_owner;
    int _gettedMoney;
    int _limit;

    vector<string> history;

    string _accountNumber;
    string _password;

	CreditAccount(const CreditAccount&);
	CreditAccount& operator=(const CreditAccount&);
public:
    CreditAccount(Customer&, int, string, string);
	~CreditAccount();


    /*
     * getMoney(int quantity)
     * quantity - amount of money that will be getted
     * return:
     *          true - if transaction was done
     *          false - if transaction was not done
     */
    bool getMoney(int quantity);

    /*
     * putMOney(int quantity)
     * quantity - amount of money that will be inserted
     * return:
     *          true - if transaction was done
     *          false - if transaction was not done
     */
    bool putMoney(int quantity);

    // show balance
    inline const int checkBalance() const { return (_limit - _gettedMoney); };
    inline int gettedMoney() const { return _gettedMoney; };

    inline const string& getLogin() { return _accountNumber; };
    inline const string& getPassword() { return _password; };
};
