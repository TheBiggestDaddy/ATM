/* 
 * @author
 * Kutsyk Vasyl
 * © K.V.N.
 * 16/03/2014
 */

#include "Date.h"
#include <ctime>

using namespace std;

string Date::monthNames [12]=
{
   "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
   "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
};

bool Date::defaultSet = false;
Date Date::defaultDate;

Date::Date ( int d, Month m, int y)
{
	fillDate(d, m, y);
}

Date::Date ( int d, int m, int y)
{
	fillDate(d, Month(m), y);
}


Date::Date (const Date& originalDate):
_day(originalDate.day()),
_month(originalDate.month()),
_year(originalDate.year())
{
#ifndef NDEBUG
      cout<<"Date  copy constructor: "<<*this;
#endif
	return;
}

Date::~Date()
{
#ifndef NDEBUG
      cout<<"Date destroyed: "<<*this;
#endif
}

void Date::setDay(int d) 
{ 
	_day = d;
	checkDay(_day);
}

void Date::setMonth(int m) 
{	
	_month = m; 
	checkDay(_day);
}

void Date::setYear(int y) 
{
	_year = y;
}

void Date::setDefault()
{
// Створення указника на сьогодні
   struct tm* today=new tm;
// Обробка таймера й ініціалізація поточного дня
   time_t timer;
   time(&timer);
   today=gmtime(&timer);

// Вибір дня, місяця та року
   defaultDate._day=today->tm_mday;
   defaultDate._month=++(today->tm_mon);
   defaultDate._year=today->tm_year+=1900;

   return;
}

void Date::setDefault(int d, Month m, int y)
{
	defaultDate = Date(d,m,y);
}	

int Date::getNumberOfDays()
{
	int numberOfDays = 0;

	switch(_month)
   {
   case feb:
      numberOfDays=28+leapYear(_year);
      break;
   case apr: case jun: case sep: case nov:
      numberOfDays=30;
      break;
   case jan: case mar: case may:
   case jul: case aug: case oct: case dec:
      numberOfDays=31;
      break;
   default:
      throw BadDate(_day, _month, _year);
   }

	return numberOfDays;
}

const Date& Date::operator++()
{
	int numberOfDays = getNumberOfDays();

   if(numberOfDays>_day)
	   _day++;
   else
   {
	   if(_month<12)
	   {
		   _day = 1;
		   ++_month;
	   }
	   else
	   {
		   _day = 1;
		   _month = 1;
		   ++_year;
	   }
   }

   return *this;
}

const Date Date::operator++(int i)
{
   int numberOfDays = getNumberOfDays();
   Date result(*this);

   if(numberOfDays>_day)
	   _day++;
   else
   {
	   if(_month<12)
	   {
		   _day = 1;
		   ++_month;
	   }
	   else
	   {
		   _day = 1;
		   _month = 1;
		   ++_year;
	   }
   }

   return result;
}

const Date& Date::operator--()
{
   if(_day > 1)
	   _day--;
   else
   {
	   if(_month>1)
	   {
		   --_month;
		   _day = getNumberOfDays();
	   }
	   else
	   {
		   _day = 31;
		   _month = 12;
		   --_year;
	   }
   }

   return *this;
}
const Date  Date::operator--(int)
{
   Date result(*this);
	
   if(_day > 1)
	   _day--;
   else
   {
	   if(_month>1)
	   {
		   --_month;
		   _day = getNumberOfDays();
	   }
	   else
	   {
		   _day = 31;
		   _month = 12;
		   --_year;
	   }
   }

   return result;
}

void Date::fillDate(int d, Month m, int y)
{
	if(!defaultSet)
   {
      defaultSet=true;
      setDefault();
#ifndef NDEBUG
      cout<<"Date constructor defaultDate: "<<*this;
#endif
      return;
   }

   _day= d ? d :defaultDate._day;
   _month= m ? m :defaultDate._month;
   _year= y ? y: defaultDate._year;

	checkDay(_day);

#ifndef NDEBUG
   cout<<"Date constructor: "<<*this;
#endif
   }

void Date::checkDay(int day)
   {
   int numberOfDays = getNumberOfDays();

   if( (day < 1) || (numberOfDays < day) || (_year < 0))
      throw BadDate(day, _month, _year);
}

bool Date::leapYear(int y)
{
	if (y % 400 == 0) return true;
	else if (y % 100 == 0) return false;
	else if (y%4 == 0) return true;
	else return false;
}

void Date::showDefault()
{
	 cout<<defaultDate;
}

ostream& operator<<(ostream& os, const Date& d)
{
	os<<d.day()<<':'<<d.getMonthName()<<':'<<d.year()<<endl;
	return os;
}

ostream& operator<<(ostream& os, const Date::BadDate & bd)
{
	os<<bd._day<<':'<<bd._month<<':'<<bd._year<<endl;
	return os;
}
const bool operator==(const Date& d1, const Date& d2)
{
	return d1.day()==d2.day() && 
		   d1.month() == d2.month() && 
		   d1.year() == d2.year();
}

const bool operator!=(const Date& d1, const Date& d2)
{
	return !(d1==d2);
}

const bool operator>(const Date& d1, const Date& d2)
{
	return !(d1<d2);
}

const bool operator<(const Date& d1, const Date& d2)
{
	return (d1.year()<d2.year() || 
		( d1.month()<d2.month() && d1.year()==d2.year()) ||
		( d1.day()<d2.day() && ( d1.month()==d2.month() && d1.year()==d2.year()) ) );
}