#include <iostream>
using namespace std;
#include <locale.h>
main()
{
	setlocale(LC_ALL, " Portuguese");
	float num, dobro, metade;
	cout<< "Digite um valor: ";
	cin>> num;
	dobro = num * 2;
	metade = num/2;
	cout<< " O Valor digitado foi: " <<num<< " seu dobro e: " <<dobro<< ", e sua metade e: " <<metade<< "\n\n";
}
