#include <iostream>

//Author: Enus Natã Da Silva Santos

//4.Faça um programa que calcule e imprima o número de letras que tem um livro. Serão
//fornecidos pelo usuário o número de páginas do livro e o número de letras por página.

using namespace std ;

class Livro
{
    public:
            Livro(const int qtdpaginas , const int qtdletraspagina);

            void setQtdPaginas(const int qtdpaginas);
            void setQtdLetrasPagina(const int qtdletraspagina);
            void setQtdLetrasLivro(const int qtdletraslivro);

            void calcularQtdLetrasLivro();

            int getQtdPaginas();
            int getQtdLetrasPagina();
            int getQtdLetrasLivro();

            ~Livro();
    private:
            int qtdpaginas;
            int qtdletraspagina;
            int qtdletraslivro;
};

Livro::Livro(const int qtdpaginas , const int qtdletraspagina)
{
    setQtdPaginas(qtdpaginas);
    setQtdLetrasPagina(qtdletraspagina);
}

void Livro::setQtdPaginas(const int qtdpaginas)
{
    if(qtdpaginas >= 150 && qtdpaginas <= 600)
    {
        Livro::qtdpaginas = qtdpaginas ;
    }
    else
    {
        Livro::qtdpaginas = 100 ;
    }
    
}

void Livro::setQtdLetrasPagina(const int qtdletraspagina)
{
    if(qtdletraspagina >= 100 && qtdletraspagina <= 850)
    {
        Livro::qtdletraspagina = qtdletraspagina ;
    }
    else
    {
        Livro::qtdletraspagina = 100 ;
    }
    
}

void Livro::calcularQtdLetrasLivro()
{
    int qtdletraslivrotmp;

    qtdletraslivrotmp = ( getQtdLetrasPagina() * getQtdPaginas() ) ;

    setQtdLetrasLivro(qtdletraslivrotmp);

}

void Livro::setQtdLetrasLivro(const int qtdletraslivro)
{
    if(qtdletraslivro >= 15000)
    {
        Livro::qtdletraslivro = qtdletraslivro ;
    }
    else
    {
        Livro::qtdletraslivro = 15000 ;
    }
    
}

int Livro::getQtdPaginas()
{
    return qtdpaginas;
}

int Livro::getQtdLetrasPagina()
{
    return qtdletraspagina;
}

int Livro::getQtdLetrasLivro()
{
    return qtdletraslivro;
}

Livro::~Livro()
{

}

int main()
{
    Livro livro1(150,150);

    cout << livro1.getQtdPaginas() << endl ;
    cout << livro1.getQtdLetrasPagina() << endl ;

    livro1.calcularQtdLetrasLivro();

    cout << livro1.getQtdLetrasLivro() << endl ;

}