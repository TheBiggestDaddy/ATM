#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include "Account.h"
#include "Customer.h"
#include "Date.h"

using namespace std;

class Customer;
class DebitAccount: public Account
{
private:
    Customer *_owner;
    int _leftAmount;
    Date _date;

    vector<string> _history;

    string _accountNumber;
    string _password;

    DebitAccount();
    DebitAccount(const DebitAccount&);
	DebitAccount& operator=(const DebitAccount&);
public:
    DebitAccount(Customer&, string, string);
	~DebitAccount();

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


    void addActionToHistory(const string& action);

    inline vector<string>& getHistory() { return _history; };

    // show balance
    inline const int checkBalance() const { return _leftAmount; };

    inline const string& getLogin() { return _accountNumber; };
    inline const string& getPassword() { return _password; };
};
