#include <iostream>
using namespace std;
#include <locale.h>
main ()
{
	setlocale(LC_ALL,"Portuguese");
	float num1,num2,res;
	cout<< "Digite o Numero que ser� Dividido (Dividendo): ";
	cin>>num1;
	do 
	{
		cout<< "Digite o Numero que ser� o Divisor: ";
		cin>>num2;
	}while(num2==0);
	res = num1/num2;
	cout<< "O Resultado da divis�o de "<<num1<< "por" <<num2<< " � igual a: " <<res<< "\n\n" ;	
	system ("pause");
}
