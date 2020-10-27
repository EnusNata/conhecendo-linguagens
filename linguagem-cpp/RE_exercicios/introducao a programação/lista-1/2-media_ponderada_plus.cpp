#include <iostream>

//Author: Enus Natã Da Silva Santos

//2.Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a
//média ponderada dessas notas.

class situacao2
{
    public:
            situacao2();
            situacao2(float notas_somadas);
            void calcular_media();
            inline void mostrar_media();
            operator float();
            ~situacao2();
    private:
            float fmedia_ponderada;
            int ipeso_final;
            float fnota[4];
            int ipeso[4];
};

situacao2::situacao2()
{
    for(int icontador = 0; icontador < 4; icontador++)
    {
        std::cout << "digite a nota " << icontador+1 << " :" << std::endl;
        std::cin >> fnota[icontador];

        std::cout << "digite o peso da nota " << icontador+1 << " :" << std::endl;
        std::cin >> ipeso[icontador];
    }
}

situacao2::situacao2(float notas_somadas)
{
    for(int icontador = 0 ; icontador < 4 ; icontador++)
    {
        fnota[icontador] = (notas_somadas / 4);
        ipeso[icontador] = (icontador+1);
    }
}

void situacao2::calcular_media()
{
    fmedia_ponderada = 0.0;
    ipeso_final = 0;

    for(int icontador = 0; icontador < 4; icontador++)
    {
        fmedia_ponderada += (fnota[icontador] * ipeso[icontador]) ;
        ipeso_final += ipeso[icontador]; 
    }

    fmedia_ponderada /= ipeso_final;

}

inline void situacao2::mostrar_media()
{
    std::cout << "a média do aluno é: " << fmedia_ponderada << std::endl;
}

situacao2::operator float()
{
    return fmedia_ponderada;
}

situacao2::~situacao2()
{

}

int main()
{
    float fnotas_somadas = 40;

    situacao2 aluno2 = fnotas_somadas;

    aluno2.calcular_media();

    aluno2.mostrar_media();
}