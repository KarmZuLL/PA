#include <stdio.h>
main()
{
	int anoatual, anonasc, idade;
	char nome[100];
	printf ("Digite o seu nome: ");
	scanf ("%s", &nome);
	printf ("Digite o ano atual: ");
	scanf ("%i", &anoatual);
	printf ("Digite o ano de nascimento: ");
	scanf ("%i", &anonasc);
	idade = anoatual - anonasc;
	printf ("%s sua idade de nascimento e %i ", nome, idade);
	
	
		
	
}
