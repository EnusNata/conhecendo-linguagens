#include <iostream>
#include <string.h>

using namespace std;

class aluno
{
    public:
            aluno();
            inline void mostrar() const; 
            ~aluno();
    private:
            char *snome;
            char *sinscricao;
};

aluno::aluno()
{
    char snome[50+1];
    char sinscricao[10+1];
    
    cout << "nome: " << endl;
    cin >> snome;

    aluno::snome = new char [strlen(snome + 1)];
    strcpy(aluno::snome,snome);

    cout << "inscricao: " << endl;
    cin >> sinscricao;

    aluno::sinscricao = new char [strlen(sinscricao + 1)];
    strcpy(aluno::sinscricao,sinscricao);

}

inline void aluno::mostrar() const
{
    cout << "nome: " << snome << endl;
    cout << "inscricao: " << sinscricao << endl;
}

aluno::~aluno()
{

}

class media_aritmetica : public aluno
{
    public:
            media_aritmetica();
            void calcular_media();
            inline void mostrar_media() const;
            ~media_aritmetica();
    private:
            float fnumero[3];
            float fmedia;
};

media_aritmetica::media_aritmetica():aluno()
{
    for(int icontador = 0; icontador < 3; icontador++)
    {
        cout << "DIGITE A NOTA " << icontador+1 << " :" << endl;
        cin >> fnumero[icontador];
    }
}

void media_aritmetica::calcular_media()
{
    fmedia = 0;

    for(int icontador = 0; icontador < 3; icontador++)
    {
        fmedia += fnumero[icontador];
    }

    fmedia /= 3; 
}

inline void media_aritmetica::mostrar_media() const
{
    cout << "A MEDIA DO ALUNO É : " << fmedia  << endl;
}

media_aritmetica::~media_aritmetica()
{

}

class media_ponderada : public aluno
{
    public:
            media_ponderada();
            void calcular_media();
            inline void mostrar_media() const;
            ~media_ponderada();
    private:
            float fmedia;
            int ipeso_final;
            float fnota[3];
            int ipeso[3];
};

media_ponderada::media_ponderada():aluno()
{
    for(int icontador = 0; icontador < 3; icontador++)
    {
        cout << "digite a nota " << icontador+1 << " :" << endl;
        cin >> fnota[icontador];

        cout << "digite o peso da nota " << icontador+1 << " :" << endl;
        cin >> ipeso[icontador];
    }
}

void media_ponderada::calcular_media()
{
    fmedia = 0.0;
    ipeso_final = 0;

    for(int icontador = 0; icontador < 3; icontador++)
    {
        fmedia += (fnota[icontador] * ipeso[icontador]) ;
        ipeso_final += ipeso[icontador]; 
    }

    fmedia /= ipeso_final;

}

inline void media_ponderada::mostrar_media() const
{
    cout << "a média do aluno é: " << fmedia << endl;
}

media_ponderada::~media_ponderada()
{

}


int main()
{
    media_aritmetica aluno1;
}
