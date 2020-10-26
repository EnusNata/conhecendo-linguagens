#include <stdio.h>
#define DIM 3

//Author: Enus Natã Da Silva Santos

void diagonal_secundaria(int vetor[DIM][DIM]);
void mostrar(int vetor[DIM][DIM]);

int main()
{

    int vetor[DIM][DIM]={0};

    diagonal_secundaria(vetor);
    mostrar(vetor);

}

void diagonal_secundaria(int vetor[DIM][DIM])
{
    int linha = -1;
    int coluna = DIM;

    do
    {
        linha++;
        coluna--;

        vetor[linha][coluna] = 1;

    }
    while(linha != DIM-1 && coluna != 0);

}

void mostrar(int vetor[DIM][DIM])
{
    int indice1;
    int indice2;

    for(indice1=0; indice1<DIM; indice1++)
    {
        for(indice2=0; indice2<DIM; indice2++)
        {
            printf("vetor[%d][%d] = %d\n",indice1,indice2,vetor[indice1][indice2]);
        }
    }

}
