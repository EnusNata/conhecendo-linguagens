#include <stdio.h>
#include <string.h>

int pk = 1;

class produto
{
    public:
            produto(char name[15],float value);
            
            ~produto();

    private:
            int primary_key;
            char nome[15];
            float preco;

};



produto::produto(char name[15],float value)
{

    primary_key = pk;
    strcpy(nome,name);
    preco = value;

    pk++;
}


produto::~produto()
{
   
}

int main()
{
	produto 
}

