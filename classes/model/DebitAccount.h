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
    size_t _leftAmount;
    Date _startDate;
    Date _endDate;

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

    inline const Date& getStartDate() {return _startDate; };
    inline const Date& getEndDate() { return _endDate; };

    // show balance
    inline const size_t checkBalance() const { return _leftAmount; };

    inline const string& getLogin() { return _accountNumber; };
    inline const string& getPassword() { return _password; };
};
