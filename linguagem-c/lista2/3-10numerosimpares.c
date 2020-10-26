#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//3.Faça um programa que declare um vetor de 10 posições, o preencha com os 10
//primeiros números ímpares e o imprima.


void inicializar_impar(int vetor[],int indice);
void mostrar(int vetor[],int indice);

int main()
{
    int indice = 10;
    int vetor[indice];
    
    inicializar_impar(vetor,indice);
    mostrar(vetor,indice);
}

void inicializar_impar(int vetor[],int indice)
{
    int indice_count;
    int impares=1;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        vetor[indice_count] = impares;

        impares = impares + 2;
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