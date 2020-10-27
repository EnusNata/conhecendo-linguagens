#include <iostream>
#include <string.h>

class data
{
    public:
            data(int idia, int imes, int iano);
            void mostrar() const;
            ~data();
    private:
            int idia;
            int imes;
            int iano;
};

data::data(int idia, int imes, int iano)
{
    data::idia = idia;
    data::imes = imes;
    data::iano = iano;
}

data::~data()
{

}

void data::mostrar() const
{
    std::cout << "nascimento: " << idia << "/" << imes << "/" << iano << std::endl;
}

class pessoa : public data
{
    public:
            pessoa(int icodigo, char *snome, char *ssobrenome, int idia ,int imes ,int iano);
            void mostrar() const;
            ~pessoa();
    private:
            int icodigo;
            char *snome;
            char *ssobrenome;
};

pessoa::pessoa(int icodigo, char *snome, char *ssobrenome, int idia ,int imes ,int iano):data(idia,imes,iano)
{
    pessoa::icodigo = icodigo;

    pessoa::snome = new char [strlen(snome) + 1];
    strcpy(pessoa::snome,snome);

    pessoa::ssobrenome = new char [strlen(ssobrenome) + 1];
    strcpy(pessoa::ssobrenome,ssobrenome);

}

pessoa::~pessoa()
{
    delete [] snome;
    delete [] ssobrenome;
}

void pessoa::mostrar() const
{
    std::cout << "codigo: " << icodigo << std::endl;
    std::cout << "nome: " << snome << std::endl;
    std::cout << "sobrenome: " << ssobrenome << std::endl;

    data::mostrar();    
}

int main()
{
    pessoa pessoa1(1,"enus","nata",11,04,1999);

    pessoa1.mostrar();
}