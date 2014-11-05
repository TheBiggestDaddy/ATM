#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * © K.V.N.
 */

#include <iostream>
#include <string>
#include <vector>
#include "Date.h"

using namespace std;
class Account
{
protected:
	static int _id;
	Date issueDate;
	Date finishDate;
	vector<string> history;

	long _balance;

	string _accountNumber;
	int _password;

public:
	virtual	~Account();
	virtual void getMoney(int quantity) = 0;
	virtual void putMOney(int quantity) = 0;
	virtual	long checkBalance() = 0;

};