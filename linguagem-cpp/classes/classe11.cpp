#include <iostream>
#include <string.h>

class data
{
    public:
            data(int idia, int imes , int iano);
            void mostrar();
            void mudar(int idia, int imes, int iano);
            ~data();
    private:
            int idia,imes,iano;

};

class president
{
    public:
            president(char *snome, char *ssobrenome, int idia, int imes ,int iano);
            void mostrar();
            void mudar(char *snome, char *ssobrenome, int idia, int imes, int iano);
            ~president();

            data aniversario;

    private:
            char snome[20];
            char ssobrenome[20];
};

data::data(int idia, int imes, int iano)
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

president::president(char *snome, char *ssobrenome, int idia, int imes, int iano):aniversario(idia,imes,iano)
{
    strcpy(president::snome,snome);
    strcpy(president::ssobrenome,ssobrenome); 
}

void president::mostrar()
{
    std::cout << "nome: " << snome << std::endl;
    std::cout << "sobrenome: " << ssobrenome << std::endl;

    aniversario.mostrar();
}

void president::mudar(char *snome, char *ssobrenome, int idia, int imes, int iano)
{
    strcpy(president::snome,snome);
    strcpy(president::ssobrenome,ssobrenome);
    
    aniversario.mudar(idia,imes,iano);
}

president::~president()
{

}


int main(void)
{
    president natan("enus","natan",11,04,1998);

    natan.mostrar();
    natan.mudar("enus","natan",11,04,1999);
    natan.mostrar();
}
