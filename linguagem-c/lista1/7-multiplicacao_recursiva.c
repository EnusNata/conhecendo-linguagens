#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//7. Faça uma função recursiva para fazer a multiplicação de dois números (a e b). A
//função receberá dois números positivos não nulos a e b e deve retornar o resultado de
//a × b.

int multiplicacao(int inumero1,int inumero2,int *resultado);

int main()
{
    
    int inumero1;
    int inumero2;
    int resultado = 0;

    printf("digite um numero: ");
    scanf("%d",&inumero1);

    printf("digite outro numero: ");
    scanf("%d",&inumero2);

    multiplicacao(inumero1,inumero2,&resultado);

    printf("o resultado da multiplicacao %d * %d = %d\n",inumero1,inumero2,resultado);

}

int multiplicacao(int inumero1,int inumero2,int *resultado)
{

    if(inumero2 == 0)
    {

        return 0;

    }
    else
    {
        (*resultado) += inumero1;

        return multiplicacao(inumero1,inumero2-1,resultado);
    }
    

}