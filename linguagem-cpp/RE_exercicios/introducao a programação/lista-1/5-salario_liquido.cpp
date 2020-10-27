#include <iostream>

//Author: Enus Natã Da Silva Santos

//5.Escreva um programa que leia o salário bruto de um funcionário e calcule o seu salário
//líquido. O salário líquido é calculado da seguinte forma:
//Salario_liquido = Salario_bruto – INSS – irf
//INSS = Salario_bruto*(11/100)
//Irf = (Salario_bruto – INSS)*(23/100)

using namespace std;

class salario
{
    public:
            salario(float salario_bruto);
            void calcular_salario_liquido();
            inline void mostrar_salario_liquido() const; 
            ~salario();
    private:
            float fsalario_bruto;
            float fsalario_liquido;
            float finss;
            float firf;
};

salario::salario(float fsalario_bruto)
{
    salario::fsalario_bruto = fsalario_bruto;
}

void salario::calcular_salario_liquido()
{
    finss = (fsalario_bruto * 0.11 );
    firf = ((fsalario_bruto - finss) * 0.23);
    fsalario_liquido = (fsalario_bruto - finss - firf); 
}

inline void salario::mostrar_salario_liquido() const
{
    cout << "salario liquido : ";
    cout.precision(4);
    cout << fixed << fsalario_liquido << endl;
}

salario::~salario()
{

}

int main()
{
    salario funcionario1(1.000);

    funcionario1.calcular_salario_liquido();
    funcionario1.mostrar_salario_liquido();

}