#include <iostream>
#include <string.h>

class data
{
    public:
            data(int idia, int imes, int iano);
            void mostrar() const;
            void mudar(int idia, int imes, int iano);
            ~data();
    private:
            int idia;
            int imes;
            int iano;

};

class dados_pessoais
{
    public:
            dados_pessoais(char *snome,char *ssobrenome,char *sendereco,int idia, int imes, int iano);
            void mostrar() const;
            void mudar(char *snome,char *ssobrenome,char *sendereco,int idia, int imes, int iano);
            ~dados_pessoais();
    private:
            char snome[20+1];
            char ssobrenome[20+1];
            char sendereco[50+1];
            data nascimento;

};

data::data(int idia, int imes, int iano)
{
    data::idia = idia;
    data::imes = imes;
    data::iano = iano;
}

void data::mostrar() const
{
    std::cout << "dia: " << idia << std::endl;
    std::cout << "mes: " << imes << std::endl;
    std::cout << "ano: " << iano << std::endl;

    std::cout << "\n" << std::endl;
}

void data::mudar(int idia, int imes, int iano)
{
    data::idia = idia;
    data::imes = imes;
    data::iano = iano;
}

data::~data()
{

}


dados_pessoais::dados_pessoais(char *snome,char *ssobrenome,char *sendereco,int idia, int imes, int iano):nascimento(idia, imes ,iano)
{
    strcpy(dados_pessoais::snome,snome);
    strcpy(dados_pessoais::ssobrenome,ssobrenome);
    strcpy(dados_pessoais::sendereco,sendereco);
}


void dados_pessoais::mostrar() const
{
    std::cout << "nome: " << snome << std::endl;
    std::cout << "sobrenome: " << ssobrenome << std::endl;
    std::cout << "sendereco: " << sendereco << std::endl;

    nascimento.mostrar();
}

void dados_pessoais::mudar(char *snome,char *ssobrenome,char *sendereco,int idia, int imes, int iano)
{
    strcpy(dados_pessoais::snome,snome);
    strcpy(dados_pessoais::ssobrenome,ssobrenome);
    strcpy(dados_pessoais::sendereco,sendereco);

    nascimento.mudar(idia,imes,iano);
}

dados_pessoais::~dados_pessoais()
{

}

int main()
{
    dados_pessoais meus("enus","natan","jerusalem 103",11,04,1999);
    meus.mostrar();
}
