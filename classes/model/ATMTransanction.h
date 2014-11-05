#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include "Account.h"
#include "Date.h"

using namespace std;

class ATMTransanctoin
{
private:
	static int _transannctionID;
	int _transanction;
	Date _transanctionDate;
	Account* _fromAccount;
	Account* _toAccount;

	ATMTransanctoin(const ATMTransanctoin&);
	ATMTransanctoin& operator=(const ATMTransanctoin&);

public:
	ATMTransanctoin(Account&, Account&, int _quantity);
	~ATMTransanctoin();
};
