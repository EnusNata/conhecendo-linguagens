#include <iostream>
#include <string.h>

int main()
{
    int *itamptr;
    char *sstringptr;

    itamptr = new int;
    *itamptr = 50+1;

    sstringptr = new char [*itamptr];

    strcpy(sstringptr,"lucas batalha");

    std::cout << sstringptr << std::endl;

    delete itamptr;
    delete [] sstringptr;
}