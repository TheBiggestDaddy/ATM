#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

class ATM
{
private:
	string _cardNumber;
	int _cardPassword;
	Account* _account;

	ATM(const ATM&);
	ATM& operator=(const ATM&);

	void getClientData(string _number, int _password);	

public:
	ATM();
	~ATM();	

	void checkClientPassword();

	void withdrawing(int _quantity);
	void sendToAccount(string _number);
	void sendToPhone(string _phoneNumber);
	void getInfo();
	void history();

	void checkIfaccountExist(string _number);
};