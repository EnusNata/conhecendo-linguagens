#include <stdio.h>

int main(int numero_argumentos, char **argumentos)
{
    FILE *arquivo_entrada;
    FILE *arquivo_saida;
    int caractere;

    arquivo_entrada = fopen(argumentos[1],"rt");

    arquivo_saida = fopen(argumentos[2],"wt");

    while((caractere = fgetc(arquivo_entrada)) != EOF)
    {
        fputc(caractere,arquivo_saida);
    }

}