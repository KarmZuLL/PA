#include <iostream>
using namespace std;
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Portuguese");
	float num, s, a;
	cout<< "Digite um valor: ";
	cin>> num;
	a = num - 1;
	s = num + 1;
	cout<< " O Valor digitado foi:"<<num<< " seu antecessor e: " <<a<< " e seu sucessor e: "<<s<<"\n\n";
	system("pause");
}
