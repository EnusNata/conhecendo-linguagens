#include <iostream>

//Author: Enus Natã Da Silva Santos

//7.Escreva um programa que leia o código de origem de um produto e imprima na tela a
//região de sua procedência.

using namespace std ;

class procedencia
{
    public:
            procedencia(int icodigo_de_origem)
            {
                procedencia::icodigo_de_origem = icodigo_de_origem;
            }

            inline void mostrar_origem() const
            {
                switch(icodigo_de_origem)
                {
                    case  1 : {cout << "sul" << endl;}break;
                    case  2 : {cout << "norte" << endl;}break;
                    case  3 : {cout << "leste" << endl;}break;
                    case  4 : {cout << "oeste" << endl;}break;
                    case  5 :
                    case  6 : {cout << "nordeste" << endl;}break;
                    case  7 :
                    case  8 :
                    case  9 : {cout << "sudeste" << endl;}break;
                    case 10 : {cout << "centro-oeste" << endl;}break;
                    case 11 : {cout << "noroeste" << endl;}break;
                    default : {cout << "importado" << endl;}break; 
                }
            }

            ~procedencia()
            {

            }

    private:
            int icodigo_de_origem;
};


int main()
{
    procedencia vinho(5);

    vinho.mostrar_origem();
}