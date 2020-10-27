#include <iostream>

//Author: Enus Natã Da Silva Santos

//2.Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a
//média ponderada dessas notas.

class situacao2
{
    public:
            situacao2();
            void calcular_media();
            inline void mostrar_media();
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

situacao2::~situacao2()
{

}

int main()
{
    situacao2 aluno2;

    aluno2.calcular_media();

    aluno2.mostrar_media();
}