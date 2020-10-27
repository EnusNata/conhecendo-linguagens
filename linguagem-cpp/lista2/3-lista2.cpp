#include <iostream>

int media(const int &i1, const int &i2, const int &i3, const int &i4);
inline void mostrar(const int &imedia);
void idades();

int main()
{
    idades();
}

void idades()
{
    std::cout << "DIGITE A PRIMEIRA IDADE: " << std::endl;

    int iidade1;

    std::cin >> iidade1;

    std::cout << "DIGITE A SEGUNDA IDADE: " << std::endl;

    int iidade2;

    std::cin >> iidade2;

    std::cout << "DIGITE A TERCEIRA IDADE: " << std::endl;

    int iidade3;

    std::cin >> iidade3;

    std::cout << "DIGITE A QUARTA IDADE: " << std::endl;

    int iidade4;

    std::cin >> iidade4;

    int imedia;

    imedia = media(iidade1 ,iidade2 ,iidade3, iidade4);

    mostrar(imedia);

}


int media(const int &i1, const int &i2, const int &i3, const int &i4)
{
    int imedia = (i1+i2+i3+i4) / 4;

    return imedia;
}

inline void mostrar(const int &imedia)
{
    std::cout << "A MEDIA DAS IDADES É : " << imedia << std::endl;
}
