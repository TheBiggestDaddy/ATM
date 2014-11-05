#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * © K.V.N.
 */

#include <iostream>
#include "Account.h"
#include "Date.h"

using namespace std;

class CreditAccount: protected Account
{
private:	
	int _gettedMoney;

	CreditAccount(const CreditAccount&);
	CreditAccount& operator=(const CreditAccount&);
public:
	CreditAccount(long _limit);
	~CreditAccount();

	void getMoney(int quantity);
	void putMOney(int quantity);
	long checkBalance();
};