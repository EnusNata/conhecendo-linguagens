#include <stdio.h>

// Enus Natã Da Silva Santos

//Faça um programa que leia um número positivo e
//implemente uma função para informar se um dado
//número é primo.


void primo(unsigned int numero);
void leitura();


void leitura()
{
	unsigned int numero;

	printf("digite um numero inteiro: ");
	scanf("%d",&numero);

	primo(numero);

}

void primo(unsigned int numero)
{
	int contador;
	int qtd_divisores;

	qtd_divisores = 0;

	for(contador = 1; contador < numero+1 ; contador++)
	{
		if(numero % contador == 0)
		{
			qtd_divisores++;
		}
	}

	if(qtd_divisores == 2)
	{
		printf("ESSE NUMERO É PRIMO\n");
	}
	else
	{
		printf("ESSE NUMERO NÃO É PRIMO\n");
	}

}



int main()
{
	leitura();
}
