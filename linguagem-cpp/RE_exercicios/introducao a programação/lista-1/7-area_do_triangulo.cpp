#include <iostream>

//Author: Enus Natã Da Silva Santos

//7.Escreva um programa que calcule a mostre a área de um triângulo. Considere que a área
//de um triângulo é: área = ( base * altura) / 2.

class triangulo;

triangulo iniciar_triangulo();

using namespace std;

class triangulo
{
    public:
            triangulo(int ibase, int ialtura);
            void calcular_area();
            inline void mostrar_area() const;
            ~triangulo();
    private:
            int ibase;
            int ialtura;
            float farea;
};

triangulo::triangulo(int ibase , int ialtura)
{
    triangulo::ibase = ibase;
    triangulo::ialtura = ialtura;
}

void triangulo::calcular_area()
{
    farea = (ibase * ialtura);
    
    farea /= 2;
}

inline void triangulo::mostrar_area() const
{
    cout << "area: " << farea << endl;
}

triangulo::~triangulo()
{

}

triangulo iniciar_triangulo()
{
    cout << "base: ";

    int ibase;

    cin >> ibase;

    cout << "altura: ";

    int ialtura;

    cin >> ialtura;

    triangulo triangulo1(ibase,ialtura);

    return triangulo1;

}

int main()
{
    triangulo triangulo1 = iniciar_triangulo();

    triangulo1.calcular_area();
    triangulo1.mostrar_area();

}