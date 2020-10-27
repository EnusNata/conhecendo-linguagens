#include <iostream>
#include <string.h>

int main()
{
    int *itamanhoptr;
    char *sminhastringptr;

    itamanhoptr = new int;
    *itamanhoptr = 30+1;

    sminhastringptr = new char [*itamanhoptr];

    strcpy(sminhastringptr,"enus nata da silva santos");

    std::cout << sminhastringptr << std::endl;

    delete itamanhoptr;
    delete [] sminhastringptr;

}