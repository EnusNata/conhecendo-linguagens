class Date
{
    public:

        Date(int day , int month , int year);

        void setDay(int day);

        void setMonth(int month);

        void setYear(int year);

        int getDay();

        int getMonth();

        int getYear();

        void displayDate();

    private:
        
        int iday;
        int imonth;
        int iyear;

};