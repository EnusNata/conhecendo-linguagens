#include <iostream>
#include <iomanip>

//Author: Enus Natã Da Silva Santos

//3.Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
//salário, sabendo-se que este sofreu um aumento de 25%.

using namespace std ;

class Salario
{
    public:
            Salario( const float salario , const float aumento);

            void setSalario( const float salario);
            void setAumento( const float aumento);

            void calcularNovoSalario();

            float getSalario();
            float getAumento();

            ~Salario();
    private:
            float salario;
            float aumento;
};

Salario::Salario( const float salario , const float aumento)
{
    setSalario(salario);
    setAumento(aumento);
}

void Salario::setSalario( const float salario)
{
    if(salario >= 1.000f && salario <= 16.000f)
    {
        Salario::salario = salario;
    }
    else
    {
        Salario::salario = 1.000f ;
    }
    
}

void Salario::setAumento( const float aumento)
{
    if(aumento >= 0.10f && aumento <= 1.00f)
    {
        Salario::aumento = aumento; 
    }
    else
    {
        Salario::aumento = 0.0f ;
    }
    
}

void Salario::calcularNovoSalario()
{
    float aumentotmp;

    aumentotmp = ( getAumento() * getSalario() );

    aumentotmp+= salario;

    setSalario(aumentotmp);

}

float Salario::getSalario()
{
    return salario;
}

float Salario::getAumento()
{
    return aumento;
}

Salario::~Salario()
{

}

int main()
{
    float salario = 1000.00f;
    float aumento = 0.25f;

    Salario funcionario1(salario,aumento);

	cout << fixed ;
    cout << "salario inicial:" << setprecision(3) << funcionario1.getSalario() << endl;
    cout << "aumento:" <<  setprecision(2) << funcionario1.getAumento() << endl;
    cout << endl ;

    funcionario1.calcularNovoSalario();

    cout << "salario final:" << setprecision(3) << funcionario1.getSalario() << endl;

}
