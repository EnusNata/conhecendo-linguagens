#include <iostream>
#include <string>

using namespace std ;

class Employee
{
    public:
            Employee(string snam , string slastnam , int sal);

            void setName(string snam);

            string getName();

            void setLastName(string slastnam);

            string getLastName();

            void setSalary(int sal);

            int getSalary();

    private:
    
        string sname;
        string slastname;
        int salary;

};