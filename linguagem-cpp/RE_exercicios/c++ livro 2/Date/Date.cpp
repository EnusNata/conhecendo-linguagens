#include <iostream>
#include <string>
#include "Date.hpp"

using namespace std ;

Date::Date(int day ,int month , int year)
{
    setDay(day);

    setMonth(month);

    setYear(year);

}

void Date::setDay(int day)
{
    iday = day;
}

void Date::setMonth(int month)
{
    if(month < 1 || month > 12)
    {
        imonth = 1 ;
    }
    else
    {
        imonth = month ;
    }
    
}

void Date::setYear(int year)
{
    iyear = year ; 
}

int Date::getDay()
{
    return iday ;
}

int Date::getMonth()
{
    return imonth ;
}

int Date::getYear()
{
    return iyear ;
}

void Date::displayDate()
{
    cout << iday << "/" << imonth << "/" << iyear << endl ;
}