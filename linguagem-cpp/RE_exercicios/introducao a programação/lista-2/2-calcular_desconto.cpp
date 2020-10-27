#include <iostream>

//Author: Enus Natã Da Silva Santos

//2.Uma empresa de vendas oferece para seus clientes um desconto que é calculado em
//função do valor da compra do cliente. Este desconto é de 20%, se o valor da compra for
//maior o igual a R$ 5000,00 e de 15%, se for menor. Escreva um algoritmo para imprimir o
//valor da compra e o desconto obtido por um determinado cliente.

using namespace std;

class preco
{
    public:
            preco(float fvalor_da_compra)
            {
                preco::fvalor_da_compra = fvalor_da_compra;
            }
            void calcular_desconto()
            {
                if(fvalor_da_compra >= 5000)
                {
                    fdesconto = 0.20;
                }
                else
                {
                    fdesconto = 0.15;
                }

                fvalor_descontado =  (fvalor_da_compra - (fvalor_da_compra * fdesconto));
                
            }
            inline void mostrar_desconto() const
            {
                cout << "preco oficial: " << fvalor_da_compra << endl;
                cout << "valor do desconto: " << fdesconto * 100 << "% " << endl;
                cout << "preco descontado: " << fvalor_descontado << "\n" << endl;
            }
            ~preco()
            {

            }
    private:
            float fvalor_da_compra;
            float fvalor_descontado;
            float fdesconto;
};

int main()
{
    preco produto1(4000);

    produto1.calcular_desconto();
    produto1.mostrar_desconto();
}