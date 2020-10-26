#include <stdio.h>

// Enus Natã Da Silva Santos

//Faça um programa que leia um número n, positivo,
//calcule a soma dos valores de 1 até n e retorne o
//resultado.

unsigned int soma(unsigned int numero);
int leitura();

int leitura()
{
	unsigned int numero;
	unsigned int resultado;

	printf("digite um valor inteiro: ");
	scanf("%d",&numero);

	resultado = soma(numero);

	return resultado;

}


unsigned int soma(unsigned int numero)
{
	unsigned int resultado;
	unsigned int contador;

	resultado=0;

	for(contador = 1; contador < numero+1; contador++)
	{
		resultado = resultado + contador;
	}

	return resultado;

}


int main()
{
	int resultado;

	resultado = leitura();

	printf("%d",resultado);
}
