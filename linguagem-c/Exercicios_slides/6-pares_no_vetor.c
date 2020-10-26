#include <stdio.h>
#define TAMANHO 3

// Enus Natã Da Silva Santos


//Faça um algoritmo que leia um vetor de 20 inteiros, conte e
//imprima quantos números pares estão contidos no vetor e
//imprima a quantidade de números pares em todo o vetor de
//números.

void leitura(int vetor[]);
int pares(int vetor[]);

void leitura(int vetor[])
{
	int contador;

	for(contador = 0; contador < TAMANHO; contador++)
	{
		printf("nota %d: ",contador+1);
		scanf("%d",&vetor[contador]);
		putchar('\n');
	}

}


int pares(int vetor[])
{
	int contador;
	int qtd_pares;

	qtd_pares = 0;

	for(contador = 0; contador < TAMANHO; contador++)
	{
		if(vetor[contador] % 2 == 0)
		{
			qtd_pares++;
		}
		else
		{
			continue;
		}
	}

	return qtd_pares;
}

int main()
{
	int vetor[TAMANHO];
	int qtd_pares;

	leitura(vetor);

	qtd_pares = pares(vetor);

	printf("a quantidade de numeros pares nesse vetor é: %d\n",qtd_pares);

} 