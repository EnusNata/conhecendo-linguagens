#include <iostream>
#include <string.h>

class pessoa
{
    public:
            pessoa(char n[15], char s[15], int i);

            ~pessoa();
    private:
            char cnome[15];
            char csobrenome[15];
            int iidade;

};


pessoa::pessoa(char n[15],char s[15], int i)
{
    strcpy(cnome,n);
    strcpy(csobrenome,s);
    iidade = i;
}

pessoa::~pessoa()
{
	
}

int main()
{
	char n[15] = {"enus"};
	char s[15] = {"nata"};
	
    pessoa pessoa1 (n,s,20);
    
}
