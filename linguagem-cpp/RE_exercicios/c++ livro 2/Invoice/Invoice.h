#include <iostream>
#include <string>

using namespace std;

class Invoice
{
    public:

        Invoice(string sident, string sdesc, int iamoun , int ipri );

        void setIdentify(string sident);

        string getIdentify();

        void setDescription(string sdesc);

        string getDescription();

        void setAmount(int iamoun);

        int getAmount();

        void setPrice(int ipri);

        int getPrice();

        int getInvoiceAmount();

    private:

        string sidentify;
        string sdescription;
        int iamount;
        int iprice;
};