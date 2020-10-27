#include <iostream>

//Author: Enus Natã Da Silva Santos

//6.Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule
//e mostre o valor do rendimento e o valor total depois do rendimento.

class investimento;

investimento valores_iniciais();

using namespace std;

class investimento
{
    public:
            investimento(float fdeposito, float fjuros);
            void calcular_rendimento();
            inline void mostrar_rendimento() const;
            inline void mostrar_valor_final() const;
            ~investimento();
    private:
            float fdeposito;
            float fjuros;
            float frendimento;
            float fvalor_final;

};

investimento::investimento(float fdeposito, float fjuros)
{
    investimento::fdeposito = fdeposito;
    investimento::fjuros = fjuros;
}

void investimento::calcular_rendimento()
{
    frendimento = (fdeposito * fjuros);
    fvalor_final = (fdeposito + frendimento); 
}

inline void investimento::mostrar_rendimento() const
{
    cout << "rendimento: ";
    cout.precision(4);
    cout << fixed << frendimento << endl;
}

inline void investimento::mostrar_valor_final() const
{
    cout << "valor final: ";
    cout.precision(4);
    cout << fixed << fvalor_final << endl;
}


investimento::~investimento()
{

}

investimento valores_iniciais()
{
    cout << "valor do deposito: " ; 

    float fdeposito;

    cin >> fdeposito;

    cout << "taxa de juros: " ;

    float fjuros;

    cin >> fjuros;

    investimento investimento1(fdeposito,fjuros);

    return investimento1;

}

int main()
{
    investimento investimento1 = valores_iniciais();

    investimento1.calcular_rendimento();
    investimento1.mostrar_rendimento();
    investimento1.mostrar_valor_final();
}