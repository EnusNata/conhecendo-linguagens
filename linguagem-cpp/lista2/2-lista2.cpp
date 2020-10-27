#include <iostream>

#define FMAXDESC 5.000 

inline void mostrar(const float &valorfinal);
float desconto(const float &fpreco);
void comprar();

int main()
{
    comprar();
}


void comprar()
{
    std::cout << "DIGITE O VALOR DA COMPRA: " ;

    float fpreco;

    std::cin >> fpreco;

    float fprecofinal;

    fprecofinal = fpreco - desconto(fpreco);

    mostrar(fprecofinal);

}

float desconto(const float &fpreco)
{
    float fdesconto;

    if(fpreco >= FMAXDESC)
    {
        fdesconto = (fpreco * 0.20);

        return fdesconto;
    }
    else
    {
        fdesconto = (fpreco * 0.15);

        return fdesconto;
    }
    
}

inline void mostrar(const float &valorfinal)
{
    std::cout << "VALOR FINAL = " << valorfinal << std::endl;
}
