#include <stdio.h>
#define DIM 3

//Author: Enus Natã Da Silva Santos


void colunas(int vetor[DIM][DIM]);
void mostrar(int vetor[DIM][DIM]);

int main()
{
    int vetor[DIM][DIM]={0};

    colunas(vetor);
    mostrar(vetor);

}

void colunas(int vetor[DIM][DIM])
{
    int linha;
    int coluna=0;

    for(linha=0; linha<DIM; linha++)
    {
        vetor[linha][coluna] = 1;
    }

}

void mostrar(int vetor[DIM][DIM])
{
    int indice_count1;
    int indice_count2;

    for(indice_count1=0; indice_count1<DIM; indice_count1++)
    {
        for(indice_count2=0; indice_count2<DIM; indice_count2++)
        {
            printf("vetor[%d][%d] = %d\n",indice_count1,indice_count2,vetor[indice_count1][indice_count2]);
        }
    }

}
