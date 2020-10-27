#include <iostream>
#include <stdio.h>
#include <string.h>

class databank
{
    public:
            databank(char sn[15], int ii);
            void mostrar();
            void modificar(char sn[15],int ii);

            ~databank();
    private:
            char snome[15];
            int iidade;

};


databank::databank(char sn[15],int ii)
{
    strcpy(snome,sn);
    iidade = ii;
}

void databank::mostrar()
{
    std::cout << "NOME: " << snome << std::endl;
    std::cout << "IDADE: " << iidade << std::endl;

    putchar('\n');

}

void databank::modificar(char sn[15],int ii)
{
    strcpy(snome,sn);
    iidade = ii;
}

databank::~databank()
{
    std::cout << "fim do programa. " << std::endl;
}

int main()
{
    databank pessoa1 ("enus",20);

    pessoa1.mostrar();
    pessoa1.modificar("nata",20);
    pessoa1.mostrar();

    databank *pessoa1ptr;
    pessoa1ptr = &pessoa1;

    pessoa1ptr->mostrar();
    pessoa1ptr->modificar("silva",18);
    pessoa1ptr->mostrar();

    databank &pessoa1ref = pessoa1;

    pessoa1ref.mostrar();
    pessoa1ref.modificar("santos",20);
    pessoa1ref.mostrar();


}
