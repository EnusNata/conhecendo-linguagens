#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2("valor inicial"), s3[10];

	cout << s1.capacity() << endl;

	s1 = s2 + " copiado de s2";			// concatenacao e atribuicao

	cout << s1.capacity() << endl;


    /* 
	for (int i=0; i<10; i++)
    { 
        cin >> s3[i];
    }

	s1 += s3[0];

	cout << "tamanho de s2 é: " << s2.size();

	int sz= s2.size();

	for (int i=0; i<sz; i++)
    {
     cout << s2[i] << " ";	// acesso a caracter
    }

	cout << endl;
     */
}