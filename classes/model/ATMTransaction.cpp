/*
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include "Account.h"
#include "Account.h"
#include "Date.h"

using namespace std;

int ATMTransanctoin::_transannctionID = 0;

//	static int _transannctionID;
//	int _transanction;
//	Date _transanctionDate;
//	Account* _fromAccount;
//	Account* _toAccount;



ATMTransanctoin::ATMTransanctoin(Account& from, Account& to, int _quantity)
    :_fromAccount(&from),
     _toAccount(&to)
{
    _fromA
};

ATMTransanctoin::~ATMTransanctoin()
{

};

