#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQUIVO "dados.dat"


class produto
{
    public:
            produto(char sprod[50],char sdesc[50],float fpre,int iqtd);
            void mostrar();
            void salvar();
            void mostrar_arquivo();
            ~produto();
    private:
            int icodigo;
            char *snome;
            char *sdescricao;
            float fpreco;

};

produto::produto(char sprod[50], char sdesc[50], float fpre, int iqtd)
{
    snome = (char *) malloc(strlen(sprod));
    sdescricao = (char *) malloc(strlen(sdesc));

    strcpy(snome,sprod);
    strcpy(sdescricao,sdesc);
    fpreco = fpre;
    icodigo = iqtd;

}

void produto::mostrar()
{
    std::cout << "nome: " << snome << std::endl;
    std::cout << "descricao: " << sdescricao << std::endl;
    std::cout << "preco: " << fpreco << std::endl;
    std::cout << "codigo: " << icodigo << std::endl;

    putchar('\n');

}

void produto::salvar()
{
    FILE *arquivo;

    arquivo = fopen(ARQUIVO,"ab");

	fwrite(&icodigo,1,sizeof(int),arquivo);
    fwrite(snome,1,sizeof(snome),arquivo);
    fwrite(sdescricao,1,sizeof(sdescricao),arquivo);
    fwrite(&fpreco,1,sizeof(float),arquivo);

    fclose(arquivo);

}

void produto::mostrar_arquivo()
{
    FILE *arquivo;
    int caractere;

    arquivo = fopen(ARQUIVO,"rb");

    while((caractere = fgetc(arquivo)) != EOF)
    {
        putchar(caractere);
    }

    fclose(arquivo);

}

produto::~produto()
{

}

int main()
{
    produto estoque ("panela","feita de aluminio",53.90,1);
    estoque.mostrar();
    estoque.salvar();
    estoque.mostrar_arquivo();
}
