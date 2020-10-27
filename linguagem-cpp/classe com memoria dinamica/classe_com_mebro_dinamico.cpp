#include <iostream>
#include <string.h>

class mes
{
    public:
            mes(char *sstring);
            void mostrar() const;
            ~mes();
    private:
            char *snome_mes;
};

mes::mes(char *sstring)
{
    snome_mes = new char [strlen(sstring)+1];

    strcpy(snome_mes,sstring);
}

void mes::mostrar() const
{
    std::cout << snome_mes << std::endl;
}
mes::~mes()
{
    delete [] snome_mes;
}

int main()
{
    mes *atual;
    char snmes[20]={"junho"};

    atual = new mes(snmes);

    atual->mostrar();

}