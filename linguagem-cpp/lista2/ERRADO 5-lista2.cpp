#include <iostream>

inline void mostrar(int &ivetor[]);
void ordenacao(int &ivetor[]);
void leitura();

int main()
{

}

void leitura()
{
    int ivetor[3];

    for(int icount = 0; icount < 3; icount++)
    {
        std::cout << "DIGITE O VALOR " << icount+1 << std::endl;

        std::cin >> ivetor[icount];

    }

    ordenacao(ivetor);

}

void ordenacao(int &ivetor[])
{
    int itmp;

    itmp = ivetor[0];

    for(int iindice1 = 0; iindice1 < 3; iindice1++)
    {

        for(int iindice2 = iindice1; iindice2 < 3; iindice2++)
        {
            if(ivetor[iindice2] > itmp)
            {
                itmp = ivetor[iindice2];
            }
        }

        ivetor[iindice1] = itmp;

        itmp = ivetor[iindice1+1];

    }

    mostrar(&ivetor[0]);

}

inline void mostrar(int &ivetor[])
{
    for(int icount = 0; icount < 3; icount++)
    {
        std::cout << ivetor[icount] << std::endl;
    }
}
