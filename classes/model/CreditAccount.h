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
    size_t _gettedMoney;
    size_t _limit;
    Date _date;

    vector<string> _history;

    string _accountNumber;
    string _password;

	CreditAccount(const CreditAccount&);
	CreditAccount& operator=(const CreditAccount&);
public:
    CreditAccount(Customer&, size_t, string, string);
	~CreditAccount();


    /*
     * getMoney(size_t quantity)
     * quantity - amount of money that will be getted
     * return:
     *          true - if transaction was done
     *          false - if transaction was not done
     */
    bool getMoney(size_t quantity);

    /*
     * putMOney(size_t quantity)
     * quantity - amount of money that will be inserted
     * return:
     *          true - if transaction was done
     *          false - if transaction was not done
     */
    bool putMoney(size_t quantity);

    void addActionToHistory(const string& action);

    inline vector<string>& getHistory() { return _history; };

    // show balance
    inline const size_t checkBalance() const { return (_limit - _gettedMoney); };
    inline size_t gettedMoney() const { return _gettedMoney; };

    inline const string& getLogin() { return _accountNumber; };
    inline const string& getPassword() { return _password; };
};
