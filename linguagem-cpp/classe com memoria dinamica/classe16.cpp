#include <iostream>
#include <string.h>

class date
{
    public:
            date(int idia, int imes, int iano);
            void showit() const;
            void modify(int idia, int imes, int iano);
            ~date();
    private:
            int idia;
            int imes;
            int iano;
};

class product
{
    public:
            product(int icodigo, char *sproduto, char *sdescricao, float fpreco);
            product(product &outro);
            void showit() const;
            void modify(int icodigo, char *sproduto, char *sdescricao, float fpreco);
            ~product();
    private:
            int icodigo;
            char *sproduto;
            char *sdescricao;
            float fpreco;
            //date drecebimento;
};

date::date(int idia, int imes, int iano)
{
    date::idia = idia;
    date::imes = imes;
    date::iano = iano;
}

void date::modify(int idia, int imes, int iano)
{
    date::idia = idia;
    date::imes = imes;
    date::iano = iano;
}

void date::showit() const
{
    std::cout << idia << "/" << imes << "/" << iano << std::endl;
}

date::~date()
{

}

product::product(int icodigo, char *sproduto , char *sdescricao, float fpreco)
{
    product::icodigo = icodigo;

    product::sproduto = new char [strlen(sproduto)+1];
    strcpy(product::sproduto,sproduto);

    product::sdescricao = new char [strlen(sdescricao)+1];
    strcpy(product::sdescricao,sdescricao);

    product::fpreco = fpreco;
}

product::product(product &outro)
{
    product::icodigo = outro.icodigo;

    product::sproduto = new char [strlen(outro.sproduto)+1];
    strcpy(product::sproduto,outro.sproduto);

    product::sdescricao = new char [strlen(outro.sdescricao)+1];
    strcpy(product::sdescricao,outro.sdescricao);

    product::fpreco = outro.fpreco;
}

void product::showit() const
{
    std::cout << "codigo: " << product::icodigo << std::endl;
    std::cout << "produto: " << product::sproduto << std::endl;
    std::cout << "descricao: " << product::sdescricao << std::endl;
    std::cout << "preco: " << product::fpreco << std::endl;
}

void product::modify(int icodigo, char *sproduto , char *sdescricao, float fpreco)
{
    product::icodigo = icodigo;

    product::sproduto = new char [strlen(sproduto)+1];
    strcpy(product::sproduto,sproduto);

    product::sdescricao = new char [strlen(sdescricao)+1];
    strcpy(product::sdescricao,sdescricao);

    product::fpreco = fpreco;
}

product::~product()
{
    delete [] product::sproduto;
    delete [] product::sdescricao;
}


int main()
{
    product p1(1,"pao","feito de farinha",0.30);
    
    product p2 (p1);

    p1.modify(2,"tega","na manteiga",4.30);

    p2 = p1 ;

    p1.modify(3,"pao","na manteiga",1.00);

    p1.showit();
    p2.showit();

}