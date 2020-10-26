#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//5.Construa um programa que leia dois vetores de 10 elementos e armazene em um
//terceiro vetor a interseção dos dois.


void inicializar(int vetor[],int indice);
void interseccao(int vetor1[],int vetor2[],int vetor3[],int indice);
void mostrar(int vetor[],int indice);

int main()
{
    int indice = 10;
    int vetor1[indice];
    int vetor2[indice];
    int vetor3[indice];

    inicializar(vetor1,indice);
    inicializar(vetor2,indice);

    interseccao(vetor1,vetor2,vetor3,indice);

    mostrar(vetor3,indice);

}

void inicializar(int vetor[],int indice)
{
    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        printf("digite o elemento %d: ",indice_count+1);
        scanf("%d",&vetor[indice_count]);
    }
}

void interseccao(int vetor1[],int vetor2[],int vetor3[],int indice)
{
    int indice1;
    int indice2;
    int indice3=0;

    for(indice1=0; indice1<indice; indice1++)
    {
        for(indice2=0; indice2<indice; indice2++)
        {
            if(vetor1[indice1] == vetor2[indice2])
            {
                vetor3[indice3] = vetor1[indice1];

                indice3++;
            }
        }
    }

}

void mostrar(int vetor[],int indice)
{
    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        printf("vetor[%d] = %d\n",indice_count,vetor[indice_count]);
    }

}