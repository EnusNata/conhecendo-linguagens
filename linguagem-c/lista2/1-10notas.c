#include <stdio.h>

//Author::Enus Natã Da Silva Santos

//1.Faça um algoritmo que leia 10 notas, coloque em um vetor e depois calcule a
//média das notas informadas. Em seguida, mostre quantas notas estão abaixo da
//média, quantas estão na média e quantas estão acima da média.

void leitura(float vetor[],int indice_max);
float calcular_media(float vetor[],int indice_max);
void quantidade_estado(float vetor[],int indice_max,float media);

int main()
{
    float vetor[10];
    float media;

            leitura(vetor,10);
    media = calcular_media(vetor,10);
            quantidade_estado(vetor,10,media);

}

void leitura(float vetor[],int indice_max)
{
    int indice_cont;

    for(indice_cont=0 ; indice_cont< indice_max ; indice_cont++)
    {
        printf("digite a %d nota: ",indice_cont+1);
        scanf("%f",&vetor[indice_cont]);
    }
}

float calcular_media(float vetor[],int indice_max)
{
    float media=0;
    int indice_cont;

    for(indice_cont=0 ; indice_cont<indice_max ; indice_cont++)
    {

        media = media + vetor[indice_cont]; 

    }

    media = media/indice_max;

    return media;

}

void quantidade_estado(float vetor[],int indice_max,float media)
{

    int indice_cont;
    int acima_da_media=0;
    int abaixo_da_media=0;
    int exatamente_na_media=0;

    for(indice_cont=0 ; indice_cont<indice_max ; indice_cont++)
    {

        if(vetor[indice_cont] == media)
        {
            exatamente_na_media++;
        }
        else
            if(vetor[indice_cont] > media)
            {
                acima_da_media++;
            }
            else
                if(vetor[indice_cont] < media)
                {
                    abaixo_da_media++;
                }
            
    }

    printf("%d alunos ficaram abaixo da media, %d alunos ficaram exatamente na media e %d alunos ficaram acima da media\n",abaixo_da_media,exatamente_na_media,acima_da_media);

}