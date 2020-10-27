#include <iostream>

int livro();
int mostrar(int iletras_total);
int calculo(int iqtd_paginas , int iqtd_letras);

int main()
{
    livro();
}

int livro()
{
    std::cout << "DIGITE A QUANTIDADE DE PAGINAS: " << std::endl;

    int iqtd_paginas;

    std::cin >> iqtd_paginas;

    std::cout << "DIGITE A QUANTIDADE DE LETRAS POR PAGINA: " << std::endl;

    int iqtd_letras;

    std::cin >> iqtd_letras;

    int iletras_total;

    iletras_total = calculo(iqtd_paginas , iqtd_letras);

    mostrar(iletras_total);

    return 0;
}

int calculo(int iqtd_paginas , int iqtd_letras)
{
    int iletras_total;

    iletras_total = (iqtd_paginas * iqtd_letras);

    return iletras_total;
}

inline int mostrar(int iletras_total)
{
    std::cout << "A QUANTIDADE TOTAL DE LETRAS É : " << iletras_total << "." << std::endl;

    return 0;
}