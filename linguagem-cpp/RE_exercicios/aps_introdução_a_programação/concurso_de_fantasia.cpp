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
                cout << "nota final: " << fnota_final << endl;
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


concurso_de_fantasia* entrada_de_dados()
{
    int inumero_inscricao;
    float fnota_originalidade[3];
    float fnota_beleza[3];
    char parar = 'n' ;
    int iindice = 0;

    concurso_de_fantasia *candidato = (concurso_de_fantasia*) malloc (sizeof(concurso_de_fantasia));


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

        candidato[iindice] = new concurso_de_fantasia (inumero_inscricao,&fnota_beleza[0],&fnota_originalidade[0]);
        
        cout << "deseja parar ? (s = sim ) (n = não) : " << endl;
        cin >> parar ;

        if(parar == 'n')
        {
            candidato = (concurso_de_fantasia*) realloc(candidato,(sizeof(candidato)) + (sizeof(concurso_de_fantasia)));
            iindice++;
        }
        
    }

    return candidato;
}

int main()
{
    concurso_de_fantasia  *candidato = entrada_de_dados();

    candidato->calcular_nota_final();
    candidato->mostrar_dados();

}
