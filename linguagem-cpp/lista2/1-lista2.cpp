#include <iostream>

inline void mostrar(const int &x ,const int &y, const int &z);
void condicional(int &x , int &y, int &z);
void leitura();

int main()
{

    leitura();

}

void leitura()
{
    std::cout << "DIGITE O VALOR DE X: " << std::endl;

    int inumero1;

    std::cin >> inumero1;

    std::cout << "DIGITE O VALOR DE Y: " << std::endl;

    int inumero2;

    std::cin >> inumero2;

    std::cout << "DIGITE O VALOR DE Z: " << std::endl;

    int inumero3;

    std::cin >> inumero3;

    condicional(inumero1, inumero2, inumero3);

    mostrar(inumero1, inumero2, inumero3);

}


void condicional(int &x , int &y, int &z)
{
    if(x > y || z <= 30)
    {
        x *= 2;
    }
    else
    {
        x /= 2;
        z /= 5;
    }
    
}

inline void mostrar(const int &x ,const int &y, const int &z)
{
    std::cout << " x = " << x << "." << std::endl;
    std::cout << " y = " << y << "." << std::endl;
    std::cout << " z = " << z << "." << std::endl; 
}