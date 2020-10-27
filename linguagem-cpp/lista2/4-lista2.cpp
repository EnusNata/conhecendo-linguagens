#include <iostream>

void maior_menor(const int &i1 ,const int &i2, const int &i3);
inline void mostrar(const int &imenor, const int &imaior);
void leitura();

int main()
{
    leitura();
}

void leitura()
{
    std::cout << "DIGITE O PRIMEIRO NUMERO: " << std::endl;

    int inumero1;

    std::cin >> inumero1;

    std::cout << "DIGITE O SEGUNDO NUMERO: " << std::endl;

    int inumero2;

    std::cin >> inumero2;

    std::cout << "DIGITE O TERCEIRO NUMERO: " <<  std::endl;

    int inumero3;

    std::cin >> inumero3;
    
    maior_menor(inumero1, inumero2, inumero3);
    
}

void maior_menor(const int &i1 ,const int &i2, const int &i3)
{
    //maior

    int imaior;

    if(i1 > i2 && i1 > i3)
    {
        imaior = i1;
    }
    else if(i2 > i1 && i2 > i3)
    {
        imaior = i2;
    }
    else if(i3 > i1 && i3 > i2)
    {
        imaior = i3;
    }
    
    //maior

    //menor

    int imenor;

    if(i1 < i2 && i1 < i3)
    {
        imenor = i1;
    }
    else if(i2 < i1 && i2 < i3)
    {
        imenor = i2;
    }
    else if(i3 < i1 && i3 < i2)
    {
        imenor = i3;
    }

    //menor

    mostrar(imenor , imaior);

}



inline void mostrar(const int &imenor, const int &imaior)
{
    std::cout << "MENOR : " << imenor << "." << std::endl;
    std::cout << "MAIOR : " << imaior << "." << std::endl;
}
