#include <iostream>

//Author: Enus Natã Da Silva Santos

//3.Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
//salário, sabendo-se que este sofreu um aumento de 25%.

using namespace std;

class salario
{
    public:
            salario(float fsalario);
            void aumento();
            inline void mostrar() const;
            ~salario();
    private:
            float fsalario;
            float faumento = 0.25;
            float fsalario_com_aumento = 0.0;
};

salario::salario(float fsalario)
{
    salario::fsalario = fsalario;
}

void salario::aumento()
{
    fsalario_com_aumento = fsalario + (fsalario * faumento);
}

inline void salario::mostrar() const
{
    cout << "o salario final é : " ;
    cout.precision(4);
    cout << std::fixed << fsalario_com_aumento << endl;

}

salario::~salario()
{

}

int main()
{
    salario funcionario1(1.600);

    funcionario1.aumento();
    funcionario1.mostrar();
}