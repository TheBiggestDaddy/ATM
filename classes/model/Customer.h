#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * © K.V.N.
 */

#include <iostream>
#include <string>

#include "DebitAccount.h"
#include "CreditAccount.h"

using namespace std;

class Customer
{
private:
	string _name;
	string _surname;
	string _address;

	DebitAccount* _debitAccount;
	CreditAccount* _creditAccount;
	
	Customer();
	Customer(const Customer&);
	Customer& operator=(const Customer&);

public:
	explicit Customer(const string& name, const string& surname, const string& address);
	~Customer();


	void setDebitAccount(DebitAccount&); 
	void setCreditAccount(CreditAccount&);

	DebitAccount& getDebitAccount();
	CreditAccount& getCreditAccount();
};