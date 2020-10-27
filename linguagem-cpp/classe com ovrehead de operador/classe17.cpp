#include <iostream>
#include <string.h>

class pessoa;

class data
{
    friend class pessoa;

    public:
            data(int idia, int imes, int iano);
            data(data &outra);
            void operator=(data &outra);
            void mostrar() const;
            void modificar(int idia, int imes, int iano);
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

data::data(data &outra)
{
    data::idia = outra.idia;
    data::imes = outra.imes;
    data::iano = outra.iano;
}

void data::operator=(data &outra)
{
    if(&outra == this)
    {
        return ;
    }
    else
    {
        data::idia = outra.idia;
        data::imes = outra.imes;
        data::iano = outra.iano;
    }
}

void data::mostrar() const
{
    std::cout << "nasimento: " << idia << "/" << imes << "/" << iano << std::endl; 
}

void data::modificar(int idia, int imes, int iano)
{
    data::idia = idia;
    data::imes = imes;
    data::iano = iano;
}

data::~data()
{

}

class pessoa
{
    public:
            pessoa(char *snome, char *ssobrenome, char *sendereco, char *stelefone, int idia, int imes, int iano);
            pessoa(pessoa &outra);
            void operator=(pessoa &outra);
            static void auto_increment(); 
            void mostrar() const;
            void modificar(char *snome, char *ssobrenome, char *sendereco, char *stelefone, int idia, int imes, int iano);
            ~pessoa();
    private:
            char *snome;
            char *ssobrenome;
            char *sendereco;
            char *stelefone;
            data dnascimento;
            static int iprimary_key;
};

int pessoa::iprimary_key = 1;

pessoa::pessoa(char *snome, char *ssobrenome, char *sendereco, char *stelefone, int idia, int imes, int iano):dnascimento(idia, imes, iano)
{
    pessoa::snome = new char [strlen(snome) + 1];
    strcpy(pessoa::snome,snome);

    pessoa::ssobrenome = new char [strlen(ssobrenome) + 1];
    strcpy(pessoa::ssobrenome,ssobrenome);

    pessoa::sendereco = new char [strlen(sendereco) + 1];
    strcpy(pessoa::sendereco,sendereco);

    pessoa::stelefone = new char [strlen(stelefone) + 1];
    strcpy(pessoa::stelefone,stelefone);
}

pessoa::pessoa(pessoa &outra):dnascimento(outra.dnascimento.idia, outra.dnascimento.imes, outra.dnascimento.iano)
{
    pessoa::snome = new char [strlen(outra.snome) + 1];
    strcpy(pessoa::snome,outra.snome);

    pessoa::ssobrenome = new char [strlen(outra.ssobrenome) + 1];
    strcpy(pessoa::ssobrenome,outra.ssobrenome);

    pessoa::sendereco = new char [strlen(outra.sendereco) + 1];
    strcpy(pessoa::sendereco,outra.sendereco);

    pessoa::stelefone = new char [strlen(outra.stelefone) + 1];
    strcpy(pessoa::stelefone,outra.stelefone);

}

void pessoa::auto_increment()
{
    pessoa::iprimary_key++;
}

void pessoa::operator=(pessoa &outra)
{
    if(&outra == this)
    {
        return;
    }
    else
    {
        pessoa::snome = new char [strlen(outra.snome) + 1];
        strcpy(pessoa::snome,outra.snome);

        pessoa::ssobrenome = new char [strlen(outra.ssobrenome) + 1];
        strcpy(pessoa::ssobrenome,outra.ssobrenome);

        pessoa::sendereco = new char [strlen(outra.sendereco) + 1];
        strcpy(pessoa::sendereco,outra.sendereco);

        pessoa::stelefone = new char [strlen(outra.stelefone) + 1];
        strcpy(pessoa::stelefone,outra.stelefone);

        pessoa::dnascimento.idia = outra.dnascimento.idia;

        pessoa::dnascimento.imes = outra.dnascimento.imes;
        
        pessoa::dnascimento.iano = outra.dnascimento.iano;
    }
}

void pessoa::mostrar() const
{
    std::cout << "nome: " << snome << std::endl;
    std::cout << "sobrenome: " << ssobrenome << std::endl;
    std::cout << "endereco: " << sendereco << std::endl;
    std::cout << "telefone: " << stelefone << std::endl;
    dnascimento.mostrar();    
}

void pessoa::modificar(char *snome, char *ssobrenome, char *sendereco, char *stelefone, int idia, int imes, int iano)
{
    pessoa::snome = new char [strlen(snome) + 1];
    strcpy(pessoa::snome,snome);

    pessoa::ssobrenome = new char [strlen(ssobrenome) + 1];
    strcpy(pessoa::ssobrenome,ssobrenome);

    pessoa::sendereco = new char [strlen(sendereco) + 1];
    strcpy(pessoa::sendereco,sendereco);

    pessoa::stelefone = new char [strlen(stelefone) + 1];
    strcpy(pessoa::stelefone,stelefone);

    pessoa::dnascimento.idia = idia;

    pessoa::dnascimento.imes = imes;
    
    pessoa::dnascimento.iano = iano;
}

pessoa::~pessoa()
{
    delete [] snome;
    delete [] ssobrenome;
    delete [] sendereco;
    delete [] stelefone;
}

int main()
{
   
}