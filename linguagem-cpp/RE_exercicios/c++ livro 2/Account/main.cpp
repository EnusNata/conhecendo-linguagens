#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std ;

int main()
{
	int ibalance = 100;
	
    Account client1(ibalance);

    ibalance = client1.getBalance();

    cout << ibalance << endl ;

}
