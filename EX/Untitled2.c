#include <stdio.h>
#include <locale.h>
main ()
/* Escrever um programa que leia uma sequ�ncia de valores inteiros, at� ser
lido o valor -99. Quando isso acontecer o programa dever� mostrar a
soma e a m�dia dos valores lidos.*/


{
	setlocale (LC_ALL, "Portuguese");
	int numero;
	float media, soma=0, cont=0;
	
	do
	{
		printf ("Digite um numero:");
		scanf ("%d", &numero);
		if (numero != -99) 
		{
			soma = soma + numero;
			cont = cont + 1;
		}
	
	}while (numero != -99 );
	media = soma/cont;
	printf ("Resultado da Media: %.2f ", media);
	
	return 0;
	
	
}


