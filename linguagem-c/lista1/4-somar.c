#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//4.Faça um programa leia dois números inteiros e utilize uma função SOMAR que
//receba esses dois números por parâmetro e retorne a soma dos números inteiros
//existentes entre eles.


void somar(int inumero1,int inumero2);

int main()
{
    int inumero1;
    int inumero2;

    printf("digite um numero inteiro: ");
    scanf("%d",&inumero1);

    printf("digite outro numero inteiro: ");
    scanf("%d",&inumero2);

    somar(inumero1,inumero2);


}


void somar(int inumero1,int inumero2)
{
    int controle_de_execucao;
    int soma=0;

    for(controle_de_execucao=inumero1 ; controle_de_execucao<inumero2 ; controle_de_execucao++)
    {
        soma += controle_de_execucao;
    }

    printf("\n\na soma dos valores entre %d e %d = %d\n",inumero1,inumero2,soma);

}
