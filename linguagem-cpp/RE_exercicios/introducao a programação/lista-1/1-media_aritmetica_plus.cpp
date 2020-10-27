#include <iostream>

//Author: Enus Natã Da Silva Santos

//1.Faça um programa que receba três notas, calcule e mostre a média aritmética entre
//elas.

class situacao
{
    public:
            situacao();
            situacao(float fnotas_somadas);
            void calcular_media();
            inline void mostrar_media();
            operator float();
            ~situacao();
    private:
            float fnumero[3];
            float fmedia;
};

situacao::situacao()
{
    for(int icontador = 0; icontador < 3; icontador++)
    {
        std::cout << "DIGITE A NOTA " << icontador+1 << " :" << std::endl;
        std::cin >> fnumero[icontador];
    }
}

situacao::situacao(float fnotas_somadas)
{
    fmedia = (fnotas_somadas / 3) ;
}

void situacao::calcular_media()
{
    fmedia = 0;

    for(int icontador = 0; icontador < 3; icontador++)
    {
        fmedia += fnumero[icontador];
    }

    fmedia /= 3; 
}

inline void situacao::mostrar_media()
{
    std::cout << "A MEDIA DO ALUNO É : " << fmedia  << std::endl;
}

situacao::operator float()
{
    return fmedia;
}

situacao::~situacao()
{

}

int main()
{
    float fmedia = 23;

    situacao aluno1 = fmedia;

    aluno1 = aluno1;

    aluno1.mostrar_media();

}