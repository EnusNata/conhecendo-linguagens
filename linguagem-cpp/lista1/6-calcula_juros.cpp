#include <iostream>
#include <iomanip>

//Author: Enus Natã Da Silva Santos

//6.Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule
//e mostre o valor do rendimento e o valor total depois do rendimento.

using namespace std;

class CalculaJuros
{
    public:

            CalculaJuros( const float deposito, const float taxa_juros );

            void setDeposito( const float deposito );
            void setTaxaJuros( const float taxa_juros );
            void setRendimento( const float rendimento );
            void setValorFinal( const float valor_final );

            float getDeposito();
            float getTaxaJuros();
            float getRendimento();
            float getValorFinal();

            void calcularRendimento();
            void calcularValorFinal();

            ~CalculaJuros();

    private:
            float deposito;
            float taxa_juros;
            float rendimento;
            float valor_final;
};


CalculaJuros::CalculaJuros( const float deposito, const float taxa_juros )
{
    setDeposito( deposito );
    setTaxaJuros( taxa_juros );
}

void CalculaJuros::setDeposito( const float deposito )
{
    if( deposito >= 30.00f )
    {
        CalculaJuros::deposito = deposito ; 
    }
    else
    {
        CalculaJuros::deposito = 0.0f ;
    }
    
}


void CalculaJuros::setTaxaJuros( const float taxa_juros )
{
    if( taxa_juros >= 0.07f )
    {
        CalculaJuros::taxa_juros = taxa_juros ;
    }
    else
    {
        CalculaJuros::taxa_juros = 0.07f ;
    }
    
}

void CalculaJuros::setRendimento( const float rendimento )
{
    if ( rendimento < deposito )
    {
        CalculaJuros::rendimento = rendimento ;
    }
    else
    {
        CalculaJuros::rendimento = 0.0f ;
    }
    
}

void CalculaJuros::setValorFinal( const float valor_final )
{
    if( valor_final == ( getDeposito() + getRendimento() ) )
    {
        CalculaJuros::valor_final = valor_final ;
    }
    else
    {
        CalculaJuros::valor_final = 0.0f ;
    }
    
}

float CalculaJuros::getDeposito()
{
    return deposito ;
}

float CalculaJuros::getTaxaJuros()
{
    return taxa_juros ;
}

float CalculaJuros::getRendimento()
{
    return rendimento ;
}

float CalculaJuros::getValorFinal()
{
    return valor_final ;
}

CalculaJuros::~CalculaJuros()
{

}

void CalculaJuros::calcularRendimento()
{
    float rendimentotmp;

    rendimentotmp = ( getDeposito() * getTaxaJuros() ) ;

    setRendimento( rendimentotmp );
}


void CalculaJuros::calcularValorFinal()
{
    float valor_finaltmp;

    valor_finaltmp = ( getDeposito() + getRendimento() ) ;

    setValorFinal( valor_finaltmp );

}

int main()
{
    CalculaJuros investidor1(1000.00f,0.10f);

    cout << fixed ;
    cout << setprecision(2) << investidor1.getDeposito() << endl;
    cout << setprecision(2) << investidor1.getTaxaJuros() << endl;

    investidor1.calcularRendimento();

    cout << setprecision(2) << investidor1.getRendimento() << endl ;

    investidor1.calcularValorFinal();

    cout << setprecision(2) << investidor1.getValorFinal() << endl ;

}