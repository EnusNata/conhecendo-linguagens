#include <iostream>
#include "Account.hpp"

using namespace std;

Account::Account(int ibalance)
{
    setBalance(ibalance);
}

void Account::setBalance(int ibalance)
{
    if(ibalance >= 0 )
    {
        Account::ibalance = ibalance;
    }
    else
    {
        Account::ibalance = 0;

        error();

    }
    
}

void Account::error()
{
    cout << " invalid value !! (< 0) ." << endl;
}

void Account::credit(int ipayment)
{
    Account::ibalance += ibalance ;
}

void Account::debit(int icharge)
{
    if( (Account::ibalance - icharge > 0) )
    {
        Account::ibalance -= icharge;
    }
    else
    {
        error();

        cout << "debit amount exceeded account balance." << endl ;   
    }
    
}

int Account::getBalance()
{
    return ibalance;
}