#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO "dados.dat"

class estrutura
{
    public:
            estrutura(char *snome, char *sdescricao, float fpreco, int icodigo);
            estrutura();
            void mostrar();
            void salvar();
            void buscar();
            ~estrutura();
    private:
        char *snome;
        char *sdescricao;
        float fpreco;
        int icodigo;

};

estrutura::estrutura(char *snome, char *sdescricao, float fpreco, int icodigo)
{
    estrutura::snome = snome;
    estrutura::sdescricao = sdescricao;
    estrutura::fpreco = fpreco;
    estrutura::icodigo = icodigo;

}

estrutura::estrutura()
{
    snome = "pao";
    sdescricao = "farinha";
    fpreco = 0.30;
    icodigo = 1;

}

void estrutura::mostrar()
{
    std::cout << "produto: " << snome << std::endl;
    std::cout << "descricao: " << sdescricao << std::endl;
    std::cout << "preco: " << fpreco << std::endl;
    std::cout << "codigo: " << icodigo << std::endl;
    std::cout << "\n" << std::endl;

}

void estrutura::salvar()
{
    FILE *arquivo;

    arquivo = fopen(ARQUIVO,"ab");

    fwrite(snome,1,sizeof(snome),arquivo);
    fwrite(sdescricao,1,sizeof(sdescricao),arquivo);
    fwrite(&fpreco,1,sizeof(float),arquivo);
    fwrite(&icodigo,1,sizeof(int),arquivo);

    fclose(arquivo);

}

void estrutura::buscar()
{
    FILE *arquivo;
    char *nome = (char *) malloc(50);
    char *descricao =(char *) malloc(50);
    float preco = 0.0;
    int codigo = 0;

    arquivo = fopen(ARQUIVO,"rb");

    fscanf(arquivo,"%s",nome); 
    
    fseek(arquivo,strlen(nome),0);
    
    fscanf(arquivo,"%s",descricao);
    fscanf(arquivo,"%f",&preco);
    fscanf(arquivo,"%d",&codigo);

    std::cout << "produto: " << nome << std::endl;
    std::cout << "descricao: " << descricao << std::endl;
    std::cout << "preco: " << preco << std::endl;
    std::cout << "codigo: " << codigo << std::endl;

    fclose(arquivo);

}


estrutura::~estrutura()
{


}

int main()
{
    estrutura estoque1("panela","aço",10.50,1);
    estoque1.mostrar();
    estoque1.salvar();
    estoque1.buscar();
}
