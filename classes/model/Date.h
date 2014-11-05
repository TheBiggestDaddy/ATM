/* 
 * @author
 * Kutsyk Vasyl
 * K.V.N.
 * 16/03/2014
 */

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Date
{
public:
struct BadDate;
// to avoid problem 7.2.2002 7 feb or jul 2?
enum Month {jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

Date ( int d=0, Month m=Month(0), int y=0);
Date ( int d, int m, int y);
Date (const Date&);
~Date();

inline int day() const { return _day; };
Month month() const { return Month(_month); };
int year() const { return _year; };
const string getMonthName() const { return monthNames[month() - 1]; };

void setDay(int);
void setMonth(int);
void setYear(int);

static void setDefault(int, Month, int);
static void setDefault();
static void showDefault();

const Date& operator++();
const Date  operator++(int);
const Date& operator--();
const Date  operator--(int);

private:
int _day, _month, _year;
bool leapYear(int y);

void fillDate(int d, Month m, int y);
void checkDay(int);
int getNumberOfDays();

static string monthNames [12];
static bool defaultSet;
static Date defaultDate;

};
ostream& operator<<(ostream& os, const Date & d);

struct Date::BadDate
{
int _day, _month, _year;
BadDate(int d = 1, int m = 1, int y = 1):
_day(d),
_month(m),
_year(y)
{};

};

ostream& operator<<(ostream& os, const Date::BadDate & bd);
const bool operator==(const Date&, const Date&);
const bool operator<(const Date&, const Date&);
const bool operator>(const Date&, const Date&);
const bool operator!=(const Date&, const Date&);