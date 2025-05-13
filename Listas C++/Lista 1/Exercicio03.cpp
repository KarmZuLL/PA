#include <iostream>
using namespace std;
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	int anoatual, anonasc, idade;
	char nome[100];
	cout<< "Digite o seu nome: ";
	cin>> nome;
	cout<< "Digite o ano atual: ";
	cin>> anoatual;
	cout<< "Digite o ano de nascimento: ";
	cin>> anonasc;
	idade = anoatual - anonasc;
	cout<< "\n\n "<<nome<< " sua idade de nascimento e "<<idade<<"\n\n";
	system("pause");
	
	
		
	
}
