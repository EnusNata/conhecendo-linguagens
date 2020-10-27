#include <iostream>

int mostrar_salario(int fnovosalario);
int aumento(float fsalario);
int salario();

int main()
{
    salario();
}

int salario()
{
    std::cout << "DIGITE O SEU SALARIO: " << std::endl;

    float fsalario;

    std::cin >> fsalario;

    float fnovosalario = aumento(fsalario);

    mostrar_salario(fnovosalario);
    
    return 0;

}

int aumento(float fsalario)
{
    float fnovosalario;

    fnovosalario = fsalario + (fsalario * 0.25);

    return fnovosalario;

}

int mostrar_salario(int fnovosalario)
{
    std::cout << "O NOVO VALOR DO SALARIO É = "  << fnovosalario << "." << std::endl;
    
    return 0;
}
