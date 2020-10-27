#include <iostream>

int notas();
void mostrar_media(int imedia);
int calcular_media(int inumero1=0 ,int inumero2=0, int inumero3=0);

int main()
{
    notas();
}

int notas()
{
    std::cout << "DIGITE A PRIMEIRA NOTA:" << std::endl;

    int inumero1;

    std::cin >> inumero1;

    std::cout << "DIGITE A SEGUNDA NOTA:" << std::endl;

    int inumero2;

    std::cin >> inumero2;

    std::cout << "DIGITE A TERCEIRA NOTA: " << std::endl;

    int inumero3;

    std::cin >> inumero3;

    int imedia;

    imedia = calcular_media(inumero1 ,inumero2, inumero3);

    mostrar_media(imedia);
    
    return 0;

}

int calcular_media(int inumero1 ,int inumero2, int inumero3)
{
    if(inumero1 == 0 && inumero2 == 0 && inumero3 == 0)
    {
        return -1;
    }
    else
    {
       return (inumero1 + inumero2 + inumero3) / 3;
    }
    return 0;
}

void mostrar_media(int imedia)
{
    std::cout << "MEDIA = " << imedia << "." << std::endl; 
}
