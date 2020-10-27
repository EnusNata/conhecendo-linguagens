#include <stdio.h>

int main(int numero_argumentos, char **argumentos)
{
    FILE *arquivo;
    char icaractere;

    switch(numero_argumentos)
    {
        case 1 :
        {
            arquivo = fopen("stdin","rt");
        } break;

        case 2 :
        {
            arquivo = fopen(argumentos[1],"rt");
        } break;

        default :
        {
            //erro();
        } break;
    }

    while((icaractere = fgetc(arquivo)) != EOF)
    {
        fputc(icaractere,stdout);
    }

}