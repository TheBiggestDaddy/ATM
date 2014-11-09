#pragma once
/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 */

#include <iostream>
#include <string>
#include <vector>
#include "Date.h"

using namespace std;
class Account
{
public:
    virtual	~Account() = 0 {};

    virtual const string& getLogin() = 0;
    virtual const string& getPassword() = 0;

    virtual inline vector<string>& getHistory() = 0;

    virtual bool getMoney(size_t quantity) = 0;
    virtual bool putMoney(size_t quantity) = 0;
    virtual inline const size_t checkBalance() const = 0;
};

class BadAccount
{
private:
    string _problem;
public:
    BadAccount(string problem = "Bad accont")
        :_problem(problem)
    {};
    ~BadAccount() {};
    string getProblem() { return _problem; };
};

//ostream& operator<<(ostream& os, BadAccount& bad)
//{
//    os<<bad.getProblem();
//    return os;
//};
