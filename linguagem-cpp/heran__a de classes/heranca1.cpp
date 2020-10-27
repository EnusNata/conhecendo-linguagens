#include <iostream>
#include <string.h>

class shape
{
    public:
            shape(char *shapename);
            void displayshapename();
            ~shape();
    private:
            char sshapename[50];
};

shape::shape(char *shapename)
{
    strcpy(sshapename,shapename);
}

shape::~shape()
{

}

void shape::displayshapename()
{
    std::cout << sshapename << std::endl;
}

class circle : public shape
{
    public:
            circle(char *shapename);
            float calculatearea(int r);
            ~circle();
    private:
            int iradius;

};

circle::circle(char *shapename):shape(shapename)
{
}

circle::~circle()
{

}

float circle::calculatearea(int r)
{
    iradius = r;

    return 2 * 3.14 * iradius;
}

class square : public shape
{
    public:
            square(char *shapename);
            int calculatearea(int s);
            ~square();
    private:
            int iside;
};

square::square(char *shapename):shape(shapename)
{
}

square::~square()
{

}

int square::calculatearea(int s)
{
    iside = s;

    return iside * iside;
}

int main()
{
    circle mycircle("this is my circle");
    square mysquare("this is my square");

    mycircle.displayshapename();
    mysquare.displayshapename();

    std::cout << "area de mycircle = " << mycircle.calculatearea(2) << std::endl;
    std::cout << "area de mysquare = " << mysquare.calculatearea(2) << std::endl;

}