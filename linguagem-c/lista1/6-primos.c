#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//6.Faça um programa que leia um número e gere todos os números primos entre 1 e
//este número fornecido, exibindo-os na tela. O programa deve ter uma sub-rotina que
//determina se um número é primo ou não.

void primos(int inumero);

int main()
{
    int inumero;

    printf("digite um numero inteiro: ");
    scanf("%d",&inumero);

    primos(inumero);


}

void primos(int inumero)
{
    int controle1;
    int controle2;
    int qtd_divisores;

    for(controle1=1 ; controle1<=inumero ; controle1++)
    {
        for(controle2=1 ; controle2<=inumero ; controle2++)
        {
            if(controle1 % controle2 == 0)
            {
                qtd_divisores++;
            }

            if(controle2 == inumero && qtd_divisores == 2)
            {

                printf("%d é primo\n",controle1);

            }

            if(controle2 == inumero)
            {
                qtd_divisores = 0;
            }
        }
    }

}
