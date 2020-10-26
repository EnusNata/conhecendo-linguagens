#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//6.Escreva um programa que leia um vetor de 15 elementos reais e calcule a
//diferença entre o maior e o menor elemento existente, assim como as posições que os
//mesmos ocupam.


void ler_valores(float vetor[],int indice);
float maior_menor(float vetor[],int indice);
int diferenca_posicoes(int indice);
void mostrar(float diferencamm, int diferencap);


int main()
{
    int indice = 15;
    float vetor[indice];
    float diferencamm;
    int diferencap;

    ler_valores(vetor,indice);

    diferencamm = maior_menor(vetor,indice);
    diferencap = diferenca_posicoes(indice);

    mostrar(diferencamm,diferencap);

}



void ler_valores(float vetor[],int indice)
{
    int indice_count;

    for(indice_count=0; indice_count< indice; indice_count++)
    {
        printf("digite o valor do elemento %d: ",indice_count+1);
        scanf("%f",&vetor[indice_count]);
    }

}

float maior_menor(float vetor[],int indice)
{
    float menor = vetor[0];
    float maior = vetor[0];
    float diferencamm;
    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        if(vetor[indice_count] < menor)
        {
            menor = vetor[indice_count];
        }
        else if(vetor[indice_count] > maior)
        {
            maior = vetor[indice_count];
        }
        else
        {
            continue;
        }
    }

    diferencamm = (maior - menor);

    return diferencamm;

}

int diferenca_posicoes(int indice)
{
    int diferencap;

    indice = indice -1;

    diferencap = indice - 0;

    return diferencap;

}

void mostrar(float diferencamm, int diferencap)
{
    printf("a diferenca entre o maior e o menor valor armazenado no vetor e = %f\n",diferencamm);
    printf("a diferenca entre o maior e menor elemento do vetor e = %d\n",diferencap);
}
