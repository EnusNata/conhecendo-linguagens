#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//4.Faça um programa que leia um vetor de 15 posições e atribua valor 0 para todos
//os elementos que possuírem valores negativos. Ao final, o programa deve imprimir o
//vetor resultante.

int inicializar(int vetor[],int indice);
void mostrar(int vetor[],int indice);

int main()
{
    int indice = 15;
    int vetor[indice];

    inicializar(vetor,indice);
    mostrar(vetor,indice);

}

int inicializar(int vetor[],int indice)
{
    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        printf("digite o elemento %d\n",indice_count+1);
        scanf("%d",&vetor[indice_count]);

        if(vetor[indice_count] < 0)
        {
            vetor[indice_count] = 0;
        }
        else
        {
            continue;
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
