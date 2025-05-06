#include <iostream>
using namespace std;
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num1,num2,res;
	cout<< "Digite o Numero que será Dividido (Dividendo): ";
	cin>>num1;
	do 
	{
		cout<< "Digite o Numero que será o Divisor: ";
		cin>>num2;
	}while(num2==0);
	res = num1/num2;
	cout<< "O Resultado da divisão de "<<num1<< "por" <<num2<< " é igual a: " <<res<< "\n\n" ;	
	system ("pause");
}
