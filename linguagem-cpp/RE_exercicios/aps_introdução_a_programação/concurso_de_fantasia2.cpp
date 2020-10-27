#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std ;

class concurso_de_fantasia
{
    public:
            concurso_de_fantasia(int inumero_inscricao,float fnotas_beleza[],float fnotas_originalidade[])
            {
                concurso_de_fantasia::inumero_inscricao = inumero_inscricao;

                for(int icontador = 0; icontador < 3; icontador++)
                {
                    concurso_de_fantasia::fnotas_beleza[icontador] = fnotas_beleza[icontador];
                    concurso_de_fantasia::fnotas_originalidade[icontador] = fnotas_originalidade[icontador];
                }
            }

            void calcular_nota_final()
            {
                if( ( fnotas_beleza[0] > fnotas_beleza[1] && fnotas_beleza[0] < fnotas_beleza[2] ) || ( fnotas_beleza[0] < fnotas_beleza[1] && fnotas_beleza[0] > fnotas_beleza[2] ) )
                {
                    fnota_final = (0.4 * fnotas_beleza[0]);   
                }
                else if( ( fnotas_beleza[1] > fnotas_beleza[0] && fnotas_beleza[1] < fnotas_beleza[2] ) || ( fnotas_beleza[1] < fnotas_beleza[0] && fnotas_beleza[1] > fnotas_beleza[2] ) )
                {
                    fnota_final = (0.4 * fnotas_beleza[1]);
                }
                else if( ( fnotas_beleza[2] > fnotas_beleza[0] && fnotas_beleza[2] < fnotas_beleza[1] ) || ( fnotas_beleza[2] < fnotas_beleza[0] && fnotas_beleza[2] > fnotas_beleza[1] ) )
                {
                    fnota_final = (0.4 * fnotas_beleza[2]);
                }

                if( ( fnotas_originalidade[0] > fnotas_originalidade[1] && fnotas_originalidade[0] < fnotas_originalidade[2] ) || ( fnotas_originalidade[0] < fnotas_originalidade[1] && fnotas_originalidade[0] > fnotas_originalidade[2] ) )
                {
                    fnota_final += (0.6 * fnotas_originalidade[0]);
                }
                else if( ( fnotas_originalidade[1] > fnotas_originalidade[0] && fnotas_originalidade[1] < fnotas_originalidade[2] ) || ( fnotas_originalidade[1] < fnotas_originalidade[0] && fnotas_originalidade[1] > fnotas_originalidade[2] ) )
                {
                    fnota_final += (0.6 * fnotas_originalidade[1]);
                }
                else if( ( fnotas_originalidade[2] > fnotas_originalidade[0] && fnotas_originalidade[2] < fnotas_originalidade[1] ) || ( fnotas_originalidade[2] < fnotas_originalidade[0] && fnotas_originalidade[2] > fnotas_originalidade[1] ) )
                {
                    fnota_final += (0.6 * fnotas_originalidade[2]);
                }                

            }

            inline void mostrar_dados() const
            {
                cout << "inscricao: " << inumero_inscricao << endl;

                cout << "nota final: ";
                cout.precision(2);
                cout << fixed << fnota_final << endl;
            }

            void operator=(concurso_de_fantasia &copia)
            {
                 if(&copia == this)
                 {
                     return ;
                 }
                 else
                 {
                    concurso_de_fantasia::inumero_inscricao = copia.inumero_inscricao;
                   //concurso_de_fantasia::fnota_final = copia.fnota_final;

                    for(int icontador = 0; icontador < 3; icontador++)
                    {
                        concurso_de_fantasia::fnotas_beleza[icontador] = copia.fnotas_beleza[icontador];
                        concurso_de_fantasia::fnotas_originalidade[icontador] = copia.fnotas_originalidade[icontador];                        
                    }
         
                 }
                 
            }

            operator float()
            {
                return fnota_final;
            }

            ~concurso_de_fantasia()
            {

            }

    private:
            int inumero_inscricao;
            float fnotas_beleza[3];
            float fnotas_originalidade[3];
            float fnota_final;

};


concurso_de_fantasia* entrada_de_dados(int &itamanho)
{
    int inumero_inscricao;
    float fnota_originalidade[3];
    float fnota_beleza[3];
    char parar = 'n' ;
    int iindice = 0;

    itamanho = iindice;

    concurso_de_fantasia *candidato = (concurso_de_fantasia*) malloc (sizeof(concurso_de_fantasia));
    concurso_de_fantasia *candidatos = (concurso_de_fantasia*) malloc (sizeof(concurso_de_fantasia));

    while(parar == 'n')
    {
        cout << "inscricao: " << endl;

        cin >> inumero_inscricao ;

        for(int contador = 0; contador < 3; contador++)
        {
            cout << "nota originalidade do jurado " << contador+1 << " : " << endl;

            cin >> fnota_originalidade[contador];

            cout << "nota beleza do jurado " << contador+1 << " : " << endl ;

            cin >> fnota_beleza[contador];

        }

        candidato = new concurso_de_fantasia (inumero_inscricao,&fnota_beleza[0],&fnota_originalidade[0]);
        candidatos[iindice] = candidato[0];


        cout << "deseja parar ? (s = sim ) (n = não) : " << endl;
        cin >> parar ;

        if(parar == 'n')
        {
            candidatos = (concurso_de_fantasia*) realloc(candidatos,(sizeof(candidato)) + (sizeof(concurso_de_fantasia)));
            iindice++;
            itamanho = iindice;
        }
        
    }

    return candidatos;
}

concurso_de_fantasia vencedor(concurso_de_fantasia candidatos[], int &itamanho)
{
    float fnota_final_atual = 0.0;
    float fnota_final_vencedor = 0.0;
    int inumero_vencedor;

    for(int icontador = 0; icontador < itamanho; icontador++)
    {
        fnota_final_atual = candidatos[icontador];

        if(fnota_final_atual > fnota_final_vencedor)
        {
            fnota_final_vencedor = fnota_final_atual;
            inumero_vencedor = icontador;
        }
    }

    concurso_de_fantasia cvencedor = candidatos[inumero_vencedor];

    return cvencedor; 

}


int main()
{   
    int itamanho;
    concurso_de_fantasia *candidatos = entrada_de_dados(itamanho);
    concurso_de_fantasia cvencedor = vencedor(candidatos,itamanho);

    cvencedor.mostrar_dados(); 

}