#include <iostream>
#include <iomanip>

//Author: Enus Natã Da Silva Santos

//2.Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a
//média ponderada dessas notas.

using namespace std ;

class MediaPonderada
{
    public:
            MediaPonderada( const float notas[], const int pesos[]);

            void setNota1( const float nota1);
            void setNota2( const float nota2);
            void setNota3( const float nota3);
            
            void setPeso1( const int peso1);
            void setPeso2( const int peso2);
            void setPeso3( const int peso3);

            void calcularMedia();

            void setMediaFinal( const float media);

            float getNota1();
            float getNota2();
            float getNota3();

            int getPeso1();
            int getPeso2();
            int getPeso3();

            float getMediaFinal();

            ~MediaPonderada();
    private:

            float notas[3];
            int pesos[3];
            float media_final;
};

MediaPonderada::MediaPonderada( const float notas[], const int pesos[])
{
        setNota1(notas[0]);
        setNota2(notas[1]);
        setNota3(notas[2]);

        setPeso1(pesos[0]);
        setPeso2(pesos[1]);
        setPeso3(pesos[2]);
}

void MediaPonderada::setNota1( const float nota1)
{
        if(nota1 >= 0.0f && nota1 <= 10.00f)
        {
                MediaPonderada::notas[0] = nota1 ;
        }
        else
        {
                MediaPonderada::notas[0] = 0.0f ;
        }
        
}

void MediaPonderada::setNota2( const float nota2)
{
        if(nota2 >= 0.0f && nota2 <= 10.00f)
        {
                MediaPonderada::notas[1] = nota2 ;
        }
        else
        {
                MediaPonderada::notas[1] = 0.0f ;
        }
        
}

void MediaPonderada::setNota3( const float nota3)
{
        if(nota3 >= 0.0f && nota3 <= 10.00f)
        {
                MediaPonderada::notas[2] = nota3 ;
        }
        else
        {
                MediaPonderada::notas[2] = 0.0f ;
        }
        
}

void MediaPonderada::setPeso1( const int peso1)
{
        if(peso1 >= 1 && peso1 <= 5)
        {
                MediaPonderada::pesos[0] = peso1;        
        }
        else
        {
                MediaPonderada::pesos[0] = 0 ;
        }
        
}

void MediaPonderada::setPeso2( const int peso2)
{
        if(peso2 >= 1 && peso2 <= 5)
        {
                MediaPonderada::pesos[1] = peso2;        
        }
        else
        {
                MediaPonderada::pesos[1] = 0 ;
        }
        
}

void MediaPonderada::setPeso3( const int peso3)
{
        if(peso3 >= 1 && peso3 <= 5)
        {
                MediaPonderada::pesos[2] = peso3;        
        }
        else
        {
                MediaPonderada::pesos[2] = 0 ;
        }
        
}

void MediaPonderada::calcularMedia()
{
        float mediatmp;

        mediatmp = ( ( ( getNota1() * getPeso1() ) + ( getNota2() * getPeso2() ) + ( getNota3() * getPeso3() ) ) / ( ( getPeso1() + getPeso2() ) + getPeso3() ) ) ;

        setMediaFinal(mediatmp) ;

}

void MediaPonderada::setMediaFinal( const float media)
{
        if(media >= 0.0f && media <= 10.00f)
        {
                MediaPonderada::media_final = media ;
        }
        else
        {
                MediaPonderada::media_final = 0.0f ;
        }
        
}

float MediaPonderada::getNota1()
{
        return notas[0] ;
}

float MediaPonderada::getNota2()
{
        return notas[1] ;
}

float MediaPonderada::getNota3()
{
        return notas[2] ;
}

int MediaPonderada::getPeso1()
{
        return pesos[0] ;
}

int MediaPonderada::getPeso2()
{
        return pesos[1] ;
}

int MediaPonderada::getPeso3()
{
        return pesos[2] ;
}

float MediaPonderada::getMediaFinal()
{
        return media_final ;
}

MediaPonderada::~MediaPonderada()
{

}

int main()
{
        float notas[] = {7.7,7.5,4.3};
        int pesos[] = {1,2,3};

        MediaPonderada aluno1(notas,pesos);

        cout << "nota1 = " << aluno1.getNota1() << endl;
        cout << "nota2 = " << aluno1.getNota2() << endl;
        cout << "nota3 = " << aluno1.getNota3() << endl;

        cout << endl ;

        aluno1.calcularMedia();

        cout << "media = " << setprecision(2) << aluno1.getMediaFinal() << endl ;

}