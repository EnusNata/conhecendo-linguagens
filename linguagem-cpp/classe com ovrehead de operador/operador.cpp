#include <iostream>
#include <string.h>

class telefone
{
    public:
            telefone(char *stelefone);
            void operator=(telefone &objeto);
            void mostrar() const;
            void mudar(char *stelefone);
            ~telefone();
    private:
            char *stelefone;
};

telefone::telefone(char *stelefone)
{
    telefone::stelefone = new char [strlen(stelefone)+1];

    strcpy(telefone::stelefone,stelefone);

}

void telefone::operator=(telefone &objeto)
{
    delete telefone::stelefone;

    telefone::stelefone = new char [strlen(objeto.stelefone)+1];

    strcpy(telefone::stelefone,objeto.stelefone);
}

void telefone::mostrar() const
{
    std::cout << stelefone << std::endl;
};

void telefone::mudar(char *stelefone)
{
    delete [] telefone::stelefone;

    telefone::stelefone = new char [strlen(stelefone)+1];

    strcpy(telefone::stelefone,stelefone);
}

telefone::~telefone()
{
    delete [] stelefone;
}

int main()
{
    telefone meutelefone("98008-8667");
    meutelefone.mostrar();
    
    telefone seutelefone("94002-8922");
    seutelefone.mostrar();

    seutelefone = meutelefone;

    meutelefone.mudar("98443-5574");

    seutelefone.mostrar();


}