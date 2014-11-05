#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */
#include <iostream>
#include <vector>
#include "ATM.h"

using namespace std;

class Bank
{
private:
	vector<Customer> _customers;

	Bank(const Bank&);
	Bank& operator=(const Bank&);

	void fillCustomers();

public:
	Bank();
	~Bank();


};
