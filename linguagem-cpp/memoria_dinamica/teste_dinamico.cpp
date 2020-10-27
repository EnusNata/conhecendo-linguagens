#include <iostream>
#include <string.h>

class nome
{
    public:
            nome(char *snome);
            void mostrar() const;
            void mudar(char *snovonome);
            ~nome();
    private:
            char *snome;
};

nome::nome(char *snome)
{
    nome::snome = new char [strlen(snome)+1];
    strcpy(nome::snome,snome);
}

void nome::mostrar() const
{
    std::cout << snome << std::endl;
}

void nome::mudar(char *snovonome)
{
    delete snome;

    snome = new char [strlen(snovonome)+1];

    strcpy(nome::snome,snovonome);

}

nome::~nome()
{
    delete snome;
}

int main()
{
    nome meu("enus");
    meu.mostrar();
    meu.mudar("meu nome é julia");
    meu.mostrar();
}