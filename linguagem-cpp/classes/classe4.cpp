#include <iostream>
#include <string.h>

class bd
{
    public:
            bd(char n[15],char s[15], int i);

            ~bd();
    private:
            char nome[15];
            char sobrenome[15];
            int idade;


};

bd::bd(char n[15], char s[15], int i)
{
    strcpy(nome,n);
    strcpy(sobrenome,s);
    idade = i;
}

bd::~bd()
{
    std::cout << "fim do programa." << std::endl;
}

int main()
{
	char n[15] = {"enus"};
	char s[15] = {"nata"};
	
    bd pessoas;

    ~bd();
}
