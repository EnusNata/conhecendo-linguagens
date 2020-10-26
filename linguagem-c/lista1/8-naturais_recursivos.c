#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//8.Faça um programa que implemente uma função recursiva que receba por
//parâmetro um número inteiro positivo n e imprima todos os números naturais de 0 a N
//em ordem crescente.

int naturais(int inumero_cont,int inumero_fim);

int main()
{
    int inumero;

    printf("digite um numero natural:");
    scanf("%d",&inumero);

    naturais(0,inumero);

}

int naturais(int inumero_cont,int inumero_fim)
{
    if(inumero_cont == inumero_fim)
    {
        printf("%d\n",inumero_cont);

        return 0;
    }
    else
    {
        printf("%d\n",inumero_cont);

        naturais(inumero_cont+1,inumero_fim);
    }

}
