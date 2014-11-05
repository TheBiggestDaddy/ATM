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

class DebitAccount: protected Account
{
private:
    Customer* _owner;
	DebitAccount(const DebitAccount&);
	DebitAccount& operator=(const DebitAccount&);
public:
	DebitAccount();
	~DebitAccount();

	void getMoney(int quantity);
	void putMOney(int quantity);
	long checkBalance();
};
