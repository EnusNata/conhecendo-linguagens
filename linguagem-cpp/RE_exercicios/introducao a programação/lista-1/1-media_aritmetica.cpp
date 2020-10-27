#include <iostream>

//Author: Enus Natã Da Silva Santos


//1.Faça um programa que receba três notas, calcule e mostre a média aritmética entre
//elas.

class situacao
{
    public:
            situacao();
            void calcular_media();
            inline void mostrar_media();
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

situacao::~situacao()
{

}

int main()
{
    situacao aluno1;
    aluno1.calcular_media();
    aluno1.mostrar_media();
}