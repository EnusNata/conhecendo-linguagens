#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//2.Escreva um programa que leia 10 números e armazene os positivos no vetor
//VETPOS e os negativos no vetor VETNEG.


void mostrar(float vetor[],int indice_max);

int main()
{
    float vetor[10]={0};
    float vetpos[10]={0};
    float vetneg[10]={0};
    int indice_cont;

    for(indice_cont=0;indice_cont<10;indice_cont++)
    {

        printf("digite a nota %d :",indice_cont+1);
        scanf("%f",&vetor[indice_cont]);

        if(vetor[indice_cont] >0)
        {
            vetpos[indice_cont] = vetor[indice_cont];
        }
        else
            if(vetor[indice_cont] <0)
            {
                vetneg[indice_cont] = vetor[indice_cont];
            }
            else
            {
                continue;
            }
    }

    mostrar(vetor,10);
    putchar('\n');
    putchar('\n');
    mostrar(vetpos,10);
    putchar('\n');
    putchar('\n');
    mostrar(vetneg,10);

}


void mostrar(float vetor[],int indice_max)
{

    int indice_cont;

    for(indice_cont=0 ; indice_cont<indice_max ; indice_cont++)
    {

        printf("vetor[%d] = %f\n",indice_cont,vetor[indice_cont]);
    }
}
