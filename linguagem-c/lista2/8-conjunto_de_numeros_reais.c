#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//8.Faça um programa para ler um conjunto de números reais, armazenando-o em
//vetor e calcular o quadrado das componentes deste vetor, armazenando o resultado
//em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.


void ler_valores(float vetor[],int indice);
void vetor_quadrado(float vetor[],float qvetor[],int indice);
void mostrar(float vetor[],int indice);

int main()
{
    int indice = 10;
    float vetor[indice];
    float qvetor[indice];

    ler_valores(vetor,indice);
    vetor_quadrado(vetor,qvetor,indice);
    mostrar(vetor,indice);
    mostrar(qvetor,indice);

}

void ler_valores(float vetor[],int indice)
{
    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        printf("digite o valor numero %d: ",indice_count+1);
        scanf("%f",&vetor[indice_count]);
    }

}

void vetor_quadrado(float vetor[],float qvetor[],int indice)
{
    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        qvetor[indice_count] = (2 * vetor[indice_count] );
    }

}

void mostrar(float vetor[],int indice)
{
    int indice_count;

    for(indice_count=0; indice_count<indice; indice_count++)
    {
        printf("vetor[%d] = %f\n",indice_count,vetor[indice_count]);
    }

}
