#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std ;

int main()
{

    string sident = "001";
    string sdesc = "buy"; 
    int iamoun = 2; 
    int ipri = 4;


    Invoice client1(sident,sdesc,iamoun,ipri);

    cout << "Total: " << client1.getInvoiceAmount() << endl;
}