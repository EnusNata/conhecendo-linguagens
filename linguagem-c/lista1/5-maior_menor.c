#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//5. Faça um programa que leia dois valores inteiros e utilize uma sub-rotina, passando
//esses dois elementos por parâmetro, que retorne ao programa principal o maior
//elemento na primeira variável e o menor elemento na segunda variável. As variáveis
//devem ser impressas após o término da sub-rotina.

int maior_menor(int *inumero1,int *inumero2);

int main()
{
    int inumero1;
    int inumero2;

    printf("digite um numero: ");
    scanf("%d",&inumero1);

    printf("digite outro numero: ");
    scanf("%d",&inumero2);

    maior_menor(&inumero1,&inumero2);

    printf("maior %d\n",inumero1);
    printf("menor %d\n",inumero2);

}

int maior_menor(int *inumero1,int *inumero2)
{

    int inumero_maior;

    if(*inumero1 > *inumero2)
    {
        return 0;
    }
    else
    {
        inumero_maior = *inumero2;
        *inumero2 = *inumero1;
        *inumero1 = inumero_maior;

        return 0;
    }
    
}