#include <stdio.h>

// Enus Natã Da Silva Santos


//Faça um procedimento que realize a troca dos valores
//de duas variáveis passadas por parâmetro de forma
//que a troca permaneça no programa principal.

void mostrar(int numero1 , int numero2);
void troca(int *numero1, int *numero2);
int leitura();


void troca(int *numero1, int *numero2)
{
	int numero3;

	numero3 = *numero1;

	*numero1 = *numero2;

	*numero2 = numero3;

}

int leitura()
{
	int numero;

	printf("digite um numero: ");
	scanf("%d",&numero); 

	putchar('\n');

	return numero;
}

void mostrar(int numero1 , int numero2)
{
	printf("numero1 = %d \n",numero1);
	printf("numero2 = %d \n",numero2);
	
	putchar('\n');
}


int main()
{
	int numero1;
	int numero2;

	numero1 = leitura();
	numero2 = leitura();

	mostrar(numero1 , numero2);

	troca(&numero1 , &numero2);

	mostrar(numero1 , numero2);
}
