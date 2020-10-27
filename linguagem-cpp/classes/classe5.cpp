#include <iostream>

class numero
{
    public:
            numero(int inum);
            void mostrar(); 
            void quadrado();
            void cubo();

            ~numero();
    private:
            int inumero;

};


numero::numero(int inum)
{
    inumero = inum;
}

numero::~numero()
{
    std::cout << "funcao destrutora." << std::endl;
}

void numero::mostrar()
{
    std::cout << "numero: " << inumero << "." << std::endl;
}

void numero::quadrado()
{
    std::cout << "quadrado: " << (inumero * inumero) << std::endl;
}

void numero::cubo()
{
    std::cout << "cubo: " << (inumero * inumero * inumero * inumero) << std::endl; 
}

int main()
{
    numero numero1 (2);

    numero1.mostrar();
    numero1.quadrado();
    numero1.cubo();

}
