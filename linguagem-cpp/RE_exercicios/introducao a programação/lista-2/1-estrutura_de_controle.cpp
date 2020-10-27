#include <iostream>

//Author: Enus Natã Da Silva Santos

//1.Elabore um programa que leia os valores x, y e z e faça as seguintes ações: se x for maior
//que y, ou se z for menor ou igual a 30, multiplique x por 2. Caso contrário, divida x por 2 e
//divida z por 5.

using namespace std ;

class controle
{
    public:
            controle(float fnumero1, float fnumero2, float fnumero3)
            {
                controle::fnumero1 = fnumero1;
                controle::fnumero2 = fnumero2;
                controle::fnumero3 = fnumero3;
            }
            void executar_operacoes()
            {
                if(fnumero1 > fnumero2 || fnumero3 <= 30)
                {
                    fnumero1 *= 2;
                }
                else
                {
                    fnumero1 /= 2;
                    fnumero3 /= 5;
                }
                
            }
            inline void mostrar_resultados() const
            {
                cout << "x = " << fnumero1 << endl;
                cout << "y = " << fnumero2 << endl;
                cout << "z = " << fnumero3 << endl;
            }
            ~controle()
            {

            }
    private:
            float fnumero1;
            float fnumero2;
            float fnumero3;
};

int main()
{
    controle teste1(4,6,30);

    teste1.executar_operacoes();
    teste1.mostrar_resultados();
}