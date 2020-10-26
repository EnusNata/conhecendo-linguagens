#include <iostream>
#include <iomanip>

//Author: Enus Natã Da Silva Santos

//5.Escreva um programa que leia o salário bruto de um funcionário e calcule o seu salário
//líquido. O salário líquido é calculado da seguinte forma:
//Salario_liquido = Salario_bruto – INSS – irf
//INSS = Salario_bruto*(11/100)
//Irf = (Salario_bruto – INSS)*(23/100)

using namespace std ;

class Salario
{
    public:
            Salario( const float salario_bruto );

            void setSalarioBruto( const float salario_bruto );
            void setSalarioLiquido( const float salario_liquido );
            void setInss( const float inss );
            void setIrf( const float irf );

            void calcularSalarioLiquido();

            float getSalarioBruto();
            float getSalarioLiquido();
            float getInss();
            float getIrf();

            ~Salario();

    private:
            float salario_bruto;
            float salario_liquido;
            static float inss;
            static float irf;
};

float Salario::inss = 0.11f ;
float Salario::irf = 0.23f ;  

Salario::Salario( const float salario_bruto )
{
    setSalarioBruto( salario_bruto ) ;
}

void Salario::setSalarioBruto( const float salario_bruto )
{
    if( salario_bruto >= 1.000f && salario_bruto <= 16.000f )
    {
        Salario::salario_bruto = salario_bruto ;
    }
    else
    {
        Salario::salario_bruto = 0.0f ;
    }
    
}

float Salario::getSalarioBruto()
{
    return salario_bruto ;
}

float Salario::getSalarioLiquido()
{
    return salario_liquido ;
}

float Salario::getInss()
{
    return inss ;
}

float Salario::getIrf()
{
    return irf ;
}

void Salario::setSalarioLiquido( const float salario_liquido )
{
    if( salario_liquido < salario_bruto )
    {
        Salario::salario_liquido = salario_liquido ;
    }
    else
    {
        Salario::salario_liquido = 0.0f ;
    }
    

}

void Salario::calcularSalarioLiquido()
{
    float salario_liquidotmp ;

    salario_liquidotmp = ( getSalarioBruto() - ( ( getInss() * getSalarioBruto() ) ) - ( ( getIrf() * getSalarioBruto() ) )  ) ;

    setSalarioLiquido(salario_liquidotmp);
}

void Salario::setInss( const float inss )
{
    if( inss >= 5.0f )
    {
        Salario::inss = inss ;
    }
    else
    {
        Salario::inss = 5.0f ;
    }
    
}

void Salario::setIrf( const float irf )
{
    if( irf >= 7.0f )
    {
        Salario::irf = irf ;
    }
    else
    {
        Salario::irf = 7.0f ;
    }
    
} 

Salario::~Salario()
{

}

int main()
{
    float salario1 = 2.000f ;
    Salario funcionario1(salario1);

    cout << fixed ;
    cout << setprecision(3) << funcionario1.getSalarioBruto() << endl ;
    cout << setprecision(2) << funcionario1.getInss() << endl;
    cout << setprecision(2) << funcionario1.getIrf() << endl;

    funcionario1.calcularSalarioLiquido();

    cout << setprecision(3) << funcionario1.getSalarioLiquido() << endl;

}