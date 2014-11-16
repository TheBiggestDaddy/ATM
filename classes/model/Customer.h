#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include <string>
#include "DebitAccount.h"
#include "CreditAccount.h"

using namespace std;

class DebitAccount;
class CreditAccount;

class Customer
{
private:
	string _name;
	string _surname;
	string _address;

	DebitAccount *_debitAccount;
	CreditAccount *_creditAccount;
	
	Customer();
    Customer(const Customer&);
	Customer& operator=(const Customer&);

public:
	explicit Customer(const string& name, const string& surname, const string& address);
	~Customer();

    inline const string name() const {return _name; };
    inline const string surname() const {return _surname; };
    inline const string address() const {return _address; };

    bool addDebitAccount(string, string);
    bool addCreditAccount(size_t, string, string);

    inline DebitAccount& getDebitAccount() { return (*_debitAccount); };
    inline CreditAccount& getCreditAccount() { return (*_creditAccount); };
};

bool operator==(const Customer& a, const Customer& b);
bool operator!=(const Customer& a, const Customer& b);

//ostream& operator<<(ostream& os, const Customer& cust)
//{
//    os<<cust.name()<<" "<<cust.surname()<<" "<<cust.address();
//    return os;
//}
