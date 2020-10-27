#include <iostream>
#include <string.h>

class nome
{
    public:
            nome(char *snome);
            void operator = (nome &outro);
            void display() const;
            void change(char *snome);
            ~nome();
    private:
            char *snome;

};

nome::nome(char *snome)
{
    nome::snome = new char [strlen(snome)+1];

    strcpy(nome::snome,snome);
}

void nome::operator = (nome &outro)
{
    if(&outro == this)
    {
        std::cout << "objeto não pode ser duplicado" << std::endl;
        return ;
    }
    else
    {
        delete nome::snome;

        snome = new char [strlen(outro.snome)+1];

        strcpy(nome::snome,outro.snome);

    }
    
}

void nome::display() const
{
    std::cout << snome << std::endl;
}

void nome::change(char *snome)
{
    delete [] nome::snome;

    nome::snome = new char [strlen(snome)+1];

    strcpy(nome::snome,snome);
}

nome::~nome()
{
    delete [] nome::snome;
}

int main()
{
    nome meu("enus nata");
    meu.display();

    nome seu("kleber");
    seu.display();

    meu = seu;
    meu.display();

    seu.change("paula");
    meu.display();
    seu.display();
}