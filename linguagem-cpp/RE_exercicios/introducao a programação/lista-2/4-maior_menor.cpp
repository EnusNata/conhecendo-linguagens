#include <iostream>

//Author: Enus Natã Da Silva Santos

//4.Escreva um programa que leia três números e imprima o maior e o menor deles.

using namespace std;

class controle
{
    public:
            controle(int inumero[])
            {
                for(int icontador = 0; icontador < 3 ; icontador++)
                {
                    controle::inumero[icontador] = inumero[icontador];
                }
            }

            void calcular_maior_menor()
            {
                imaior = inumero[0];
                imenor = inumero[0];

                for(int icontador = 1; icontador < 3; icontador++)
                {
                    if(inumero[icontador] > imaior)
                    {
                        imaior = inumero[icontador];
                    }
                    else
                    {
                        if(inumero[icontador] < imenor)
                        {
                            imenor = inumero[icontador];
                        }   
                    }
                    
                }
            }

            inline void mostrar_maior_menor() const
            {
                cout << "menor: " << imenor << endl;
                cout << "maior: " << imaior << endl;
            }
            ~controle()
            {

            }
            
    private:
            int inumero[3];
            int imaior;
            int imenor;
};

int main()
{
    int ivetor[] = {20,19,21};

    controle teste1(&ivetor[0]);
//  controle teste1(ivetor);

    teste1.calcular_maior_menor();
    teste1.mostrar_maior_menor();
    
}