#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std ; 

#include <iostream>
#include <string>

using namespace std;



Invoice::Invoice(string sident, string sdesc, int iamoun , int ipri )
{

    setIdentify(sident);

    setDescription(sdesc);

    setAmount(iamoun);

    setPrice(ipri);

}

void Invoice::setIdentify(string sident)
{
    sidentify = sident ;
}

void Invoice::setDescription(string sdesc)
{
    sdescription = sdesc ; 
}

void Invoice::setAmount(int iamoun)
{
    if(iamoun < 1)
    {
        iamount = 0;
    }
    else
    {
        iamount = iamoun;
    }
    
}

void Invoice::setPrice(int ipri)
{
    if(ipri < 1)
    {
        iprice = 0;
    }
    else
    {
        iprice = ipri;
    }
    
}

string Invoice::getIdentify()
{
    return sidentify;
}

string Invoice::getDescription()
{
    return sdescription;
}

int Invoice::getAmount()
{
    return iamount;
}

int Invoice::getPrice()
{
    return iprice;
}

int Invoice::getInvoiceAmount()
{
    if(iamount == 0 || iprice == 0)
    {
        return 0;
    }
    else
    {
        return iamount * iprice ;
    }
}
