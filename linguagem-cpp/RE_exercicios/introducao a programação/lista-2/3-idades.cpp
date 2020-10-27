#include <iostream>

//Author: Enus Natã Da Silva Santos

//3.Faça um programa que leia a idade de quatro pessoas e calcule a média das idades lidas.

using namespace std;

class idades
{
    public:
            idades(int iidade[])
            {
                for(int iindice = 0; iindice < 4; iindice++)
                {
                    idades::iidade[iindice] = iidade[iindice];
                }
            }

            void calcular_media()
            {
                fmedia_idades = 0;

                for(int iindice = 0; iindice < 4 ;iindice++)
                {
                    fmedia_idades += iidade[iindice];
                }

                fmedia_idades /= 4;

            }

            inline void mostrar_media() const
            {
                cout << "media das idades: " << fmedia_idades << endl;
            }

            ~idades()
            {

            }

    private:
            int iidade[4];
            float fmedia_idades;
};

int main()
{
    int vetor[] = {20,21,22,20};

    idades grupo1(vetor);
//  idades grupo1(&vetor[0]);

    grupo1.calcular_media();
    grupo1.mostrar_media();

}