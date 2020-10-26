#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//7.Faça um algoritmo que leia um vetor de 20 inteiros, conte quantos números pares
//estão contidos no vetor e imprima a quantidade de números pares e todo o vetor de
//números.


void ler_numeros(int vetor[],int indice);
int qtd_pares(int vetor[],int indice);
void mostrar_vetor(int vetor[],int indice);
void mostrar_pares(int pares);

int main()
{
    int indice=20;
    int vetor[indice];
    int pares;

    ler_numeros(vetor,indice);

    pares = qtd_pares(vetor,indice);

    mostrar_vetor(vetor,indice);

    putchar('\n');

    mostrar_pares(pares);

}

void ler_numeros(int vetor[],int indice)
{

    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        printf("digite o valor do elemento %d\n",indice_count+1);
        scanf("%d",&vetor[indice_count]);
    }

}

int qtd_pares(int vetor[],int indice)
{
    int indice_count;
    int pares=0;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        if(vetor[indice_count] %2 == 0)
        {
            pares++;
        }
        else
        {
            continue;
        }
    }
    return pares;
}

void mostrar_vetor(int vetor[],int indice)
{
    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        printf("vetor[%d] = %d\n",indice_count,vetor[indice_count]);
    }

}

void mostrar_pares(int pares)
{
    printf("a quantidade de numeros pares no vetor e = %d\n",pares);
}
