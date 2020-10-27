#include <iostream>

//Author: Enus Natã Da Silva Santos

//6.Faça um algoritmo que leia três números (NUM1, NUM2, NUM3), uma opção e que
//imprima o valor da variável NUM1, caso a opção lida seja 1; o valor da variável NUM2, se a
//opção lida for 2; o valor da variável NUM3, se a opção lida for igual a 3. Os únicos valores
//possíveis para a variável opção são 1, 2 e 3.

using namespace std;

class controle
{
    public:
            controle(int inumero[])
            {
                for(int icontador = 0; icontador < 3; icontador++)
                {
                    controle::inumero[icontador] = inumero[icontador];
                }
            }

            void selecionar_variavel()
            {
                cout << "deseja ver o valor 1 ,2 ou 3 " << endl;
                cin >> inumero_da_variavel;
            }

            inline void mostrar_variavel() const
            {
                switch(inumero_da_variavel)
                {
                    case 1 : {cout << "numero1: " << inumero[0] << endl;}break;
                    case 2 : {cout << "numero2: " << inumero[1] << endl;}break;
                    case 3 : {cout << "numero3: " << inumero[2] << endl;}break;
                }
            }

            ~controle()
            {

            }

    private:
            int inumero_da_variavel;
            int inumero[3];

};

int main()
{
    int inumeros[]= {1,2,3};

    controle teste(inumeros);

    teste.selecionar_variavel();
    teste.mostrar_variavel();
}