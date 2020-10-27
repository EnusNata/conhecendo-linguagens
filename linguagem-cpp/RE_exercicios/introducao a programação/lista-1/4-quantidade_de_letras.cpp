#include <iostream>

//Author: Enus Natã Da Silva Santos

//4.Faça um programa que calcule e imprima o número de letras que tem um livro. Serão
//fornecidos pelo usuário o número de páginas do livro e o número de letras por página.

using namespace std;

class livro
{
    public:
            livro(int iletras_por_pagina, int inumero_de_paginas);
            inline void calcular_total_de_letras();
            inline void mostrar_total_de_letras() const;
            ~livro();
    private:
            int iletras_por_pagina;
            int inumero_de_paginas;
            int iquantidade_total_de_letras;
};

livro::livro(int iletras_por_pagina, int inumero_de_paginas)
{
    livro::iletras_por_pagina = iletras_por_pagina;
    livro::inumero_de_paginas = inumero_de_paginas;
}

void livro::calcular_total_de_letras()
{
    iquantidade_total_de_letras = (iletras_por_pagina * inumero_de_paginas);
}

inline void livro::mostrar_total_de_letras() const
{
    cout << "\no total de letras desse livro é : " << iquantidade_total_de_letras << endl;
}

livro::~livro()
{

}

livro usuario()
{
    cout << "numero de letras por pagina: " ; 

    int inumero_de_letras;

    cin >> inumero_de_letras;

    cout << "numero de paginas do livro: " ;

    int inumero_de_paginas;

    cin >> inumero_de_paginas;

    livro livro1(inumero_de_letras,inumero_de_paginas);

    return livro1;
}

int main()
{
    livro livro1 = usuario();

    livro1.calcular_total_de_letras();
    livro1.mostrar_total_de_letras();
}