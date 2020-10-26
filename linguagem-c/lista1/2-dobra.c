#include <stdio.h>

//Author::Enus Natã Da Silva Santos

// 2.Escrever um procedimento chamado DOBRA que multiplique um número inteiro
//recebido como parâmetro por 2. Escrever um programa para ler um valor inteiro e,
//utilizando o procedimento DOBRA, calcular e exibir o dobro do mesmo.


void dobra(int inumero);

int main()
{
    int inumero;

    printf("digite um numero inteiro: ");
    scanf("%d",&inumero);

    dobra(inumero);

}

void dobra(int inumero)
{
    printf("o dobro de %d e = %d\n",inumero,2*inumero);
}
