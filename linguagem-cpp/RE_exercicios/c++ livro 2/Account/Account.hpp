class Account
{
    public:

        Account(int ibalance);

        void setBalance(int ibalance);

        int getBalance();

        void credit(int ipayment);

        void debit(int icharge);

    private:


        void error();

        int ibalance;
};