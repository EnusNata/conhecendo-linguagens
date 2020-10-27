#include <iostream>
#include <string>
#include "Employee.h"

using namespace std ;

Employee::Employee(string snam , string slastnam , int sal)
{
    setName(snam);

    setLastName(slastnam);

    setSalary(sal);
}

void Employee::setName(string snam)
{
    sname = snam ;
}

string Employee::getName()
{
    return sname;
}

void Employee::setLastName(string slastnam)
{
    slastname = slastnam ;
}

string Employee::getLastName()
{
    return slastname;
}

void Employee::setSalary(int sal)
{
    if(sal < 1)
    {
        salary = 0;
    }
    else
    {
        salary = sal;
    }
    
}

int Employee::getSalary()
{
    return salary;
}
