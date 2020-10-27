#include <iostream>
#include <stdio.h>
#include <string.h>

class data
{
    public:
            data(int idia, int imes ,int iano);
            void mostrar();
            void mudar(int idia, int imes ,int iano);
            ~data();
    private:
            int idia;
            int imes;
            int iano;

};

class cadastro
{
    public:
            cadastro(char snome[], char scpf[], char smae[], char spai[], int idia, int imes, int iano);
            void mostrar();
            void mudar(char snome[], char scpf[], char smae[], char spai[], int idia, int imes, int iano);
            ~cadastro();
    private:
            char snome[25+1];
            char scpf[11+1];
            char smae[25+1];
            char spai[25+1];
            data dnascimento;
};

data::data(int idia, int imes ,int iano)
{
    data::idia = idia;
    data::imes = imes;
    data::iano = iano;
}

void data::mostrar()
{
    std::cout << "dia: " << idia << std::endl;
    std::cout << "mes: " << imes << std::endl;
    std::cout << "ano: " << iano << std::endl;
    std::cout << "\n" << std::endl;
}

void data::mudar(int idia, int imes ,int iano)
{
    data::idia = idia;
    data::imes = imes;
    data::iano = iano;
}

data::~data()
{

}

cadastro::cadastro(char snome[], char scpf[], char smae[], char spai[], int idia, int imes, int iano):dnascimento(idia ,imes ,iano)
{
    strcpy(cadastro::snome,snome);
    strcpy(cadastro::scpf,scpf);
    strcpy(cadastro::smae,smae);
    strcpy(cadastro::spai,spai);
}

void cadastro::mostrar()
{
    std::cout << "nome: " << snome << std::endl;
    std::cout << "mae: " << smae << std::endl;
    std::cout << "pai: " << spai << std::endl;
    std::cout << "cpf: " << scpf << std::endl;

    dnascimento.mostrar();
}

void cadastro::mudar(char snome[], char scpf[], char smae[], char spai[], int idia, int imes, int iano)
{
    strcpy(cadastro::snome,snome);
    strcpy(cadastro::scpf,scpf);
    strcpy(cadastro::smae,smae);
    strcpy(cadastro::spai,spai);

    dnascimento.mudar(idia, imes, iano);
}

cadastro::~cadastro()
{

}

int main()
{
    cadastro *pessoa1;

    pessoa1 = new cadastro ("enus","132-274.45","wiara","francisco",11,04,1999);

    pessoa1->mostrar();
    
    delete pessoa1;
}
