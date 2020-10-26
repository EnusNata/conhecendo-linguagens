#include <stdio.h>
#define TAMANHO 20

// Enus Natã Da Silva Santos

//Faça um programa para ler um conjunto de 20 números
//reais, armazenando-o em vetor e calcular o quadrado das
//componentes deste vetor, armazenando o resultado em outro
//vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os
//conjuntos.

void quadrado(float vetor1[],float vetor2[]);
void leitura(float vetor[]);
void mostrar(float vetor[]);

void leitura(float vetor[])
{
	int contador;

	for(contador = 0; contador < TAMANHO; contador++)
	{
		printf("nota %d: ",contador+1);
		scanf("%f",&vetor[contador]);
	}
	
	putchar('\n');
	
}

void quadrado(float vetor1[],float vetor2[])
{
	int contador;

	for(contador = 0; contador < TAMANHO; contador++)
	{
		vetor2[contador] = (vetor1[contador] * vetor1[contador]) ;
	}


}


void mostrar(float vetor[])
{
	int contador;

	for(contador = 0; contador < TAMANHO; contador++)
	{
		printf("vetor[%d]= %f\n",contador+1,vetor[contador]);
	}
}

int main()
{
	float vetor1[TAMANHO]={0};
	float vetor2[TAMANHO]={0};

	leitura(vetor1);

	quadrado(vetor1,vetor2);

	mostrar(vetor1);

	getchar();
	getchar();

	putchar('\n');

	mostrar(vetor2);

}
