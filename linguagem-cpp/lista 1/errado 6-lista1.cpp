#include <iostream>

int valores_iniciais();
inline int mostrar(float fvalor_final);
float rendimento(float fdeposito, float fjuros);

int main()
{
	valores_iniciais();
}

int valores_iniciais()
{
    std::cout << "DIGITE O VALOR DO DEPOSITO: " << std::endl;

    float fdeposito;

    std::cin >> fdeposito;

    std::cout << "DIGITE A TAXA DE JUROS: " << std::endl;

    float fjuros;
    
    std::cin >> fjuros;

    float fvalor_final;

    fvalor_final = fdeposito + rendimento(fdeposito , fjuros);

    mostrar(fvalor_final);

    return 0;

}

float rendimento(float fdeposito, float fjuros)
{
    float frendimento;

    frendimento = (fdeposito / fjuros);

    return frendimento;
}

inline int mostrar(float fvalor_final)
{
    std::cout << "O VALOR FINAL APOS O RENDIMENTO SERÁ: " << fvalor_final << "." << std::endl;

    return 0;
}
