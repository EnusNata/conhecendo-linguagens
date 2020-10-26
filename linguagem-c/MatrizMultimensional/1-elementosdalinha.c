#include <stdio.h>
#define DIM 3

//Author: Enus Natã Da Silva Santos


void linha(int vetor[3][3]);
void mostrar(int vetor[3][3]);

int main()
{

    int vetor[DIM][DIM]={0};

    linha(vetor);
    mostrar(vetor);


}

void linha(int vetor[3][3])
{

    int linha=0;
    int coluna;

    for(coluna=0; coluna<DIM; coluna++)
    {
        vetor[linha][coluna] = 1;
    }

}

void mostrar(int vetor[3][3])
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
