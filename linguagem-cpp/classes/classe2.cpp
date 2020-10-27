#include <iostream>

class circle
{
    public:

            circle(int rd);

            ~circle();

    private:

            int radius;

};



circle::circle(int rd)
{
    radius = rd;

    std::cout << "ESTOU NA FUNCAO CONSTRUTORA." << std::endl;

}

circle::~circle()
{
    std::cout << "ESTOU NA FUNCAO DESTRUTORA." << std::endl;

}

int main()
{
    circle mycircle(2);
}

