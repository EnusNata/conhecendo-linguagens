#include <iostream>
#include <iomanip>

//Author: Enus Natã Da Silva Santos


//1.Faça um programa que receba três notas, calcule e mostre a média aritmética entre
//elas.

using namespace std ;

class MediaAritmetica
{
    public:
            MediaAritmetica( const float nota1, const float nota2, const float nota3 );

            void setNota1( const float nota1 );
            void setNota2( const float nota2 );
            void setNota3( const float nota3 );

            void calcularMedia();

            float getNota1();
            float getNota2();
            float getNota3();
            float getMediaFinal();

            ~MediaAritmetica();
    private:

            void setMediaFinal( const float media);

            float nota1;
            float nota2;
            float nota3;
            float media_final;            
};

MediaAritmetica::MediaAritmetica( const float nota1, const float nota2, const float nota3 )
{
    setNota1(nota1);
    setNota2(nota2);
    setNota3(nota3);
}

void MediaAritmetica::setNota1( const float nota1 )
{
    if(nota1 >= 0.0f && nota1 <= 10.00f)
    {
        MediaAritmetica::nota1 = nota1 ;
    }
    else
    {
        MediaAritmetica::nota1 = 0.0f;
    }
    
}

void MediaAritmetica::setNota2( const float nota2 )
{
    if(nota2 >= 0.0f && nota2 <= 10.00f)
    {
        MediaAritmetica::nota2 = nota2 ;
    }
    else
    {
        MediaAritmetica::nota2 = 0.0f;
    }
}

void MediaAritmetica::setNota3( const float nota3 )
{
    if(nota3 >= 0.0f && nota3 <= 10.00f)
    {
        MediaAritmetica::nota3 = nota3 ;
    }
    else
    {
        MediaAritmetica::nota3 = 0.0f;
    }
    
}

void MediaAritmetica::calcularMedia()
{
    float mediatmp;

    mediatmp = ( ( ( getNota1() + getNota2() ) + getNota3() ) / 3 ) ;

    setMediaFinal(mediatmp);

}

void MediaAritmetica::setMediaFinal( const float media )
{
    if(media >= 0.0f && media <= 10.00f)
    {
        MediaAritmetica::media_final = media ;
    }
    else
    {
        MediaAritmetica::media_final = 0.0f;
    }
    
}

float MediaAritmetica::getNota1()
{
    return nota1;
}

float MediaAritmetica::getNota2()
{
    return nota2;
}

float MediaAritmetica::getNota3()
{
    return nota3;
}

float MediaAritmetica::getMediaFinal()
{
    return media_final;
}

MediaAritmetica::~MediaAritmetica()
{

}


int main()
{
    MediaAritmetica aluno1(7.7,5.6 ,7.3);

    cout << "nota1 = " << setprecision(2) << aluno1.getNota1() << endl ;
    cout << "nota2 = " << setprecision(2) << aluno1.getNota2() << endl ;
    cout << "nota3 = " << setprecision(2) << aluno1.getNota3() << endl ;
    cout << endl ;
    
    aluno1.calcularMedia();
    
    cout << "media = " << setprecision(2) << aluno1.getMediaFinal() << endl ;

}
