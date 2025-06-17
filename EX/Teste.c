#include <stdio.h>
#include <locale.h>
main ()
 {
	setlocale (LC_ALL,"Portuguese");
	
	int vetor[10], i;
	
	for (i = 0; i<10; i++)
	{
		printf("Digite o %dº numero: ", i);
		scanf ("%d", &vetor[i]);
	}
	printf("Os Valores Digitados: ");
	for (i = 0; i<10; i++)
	{
		printf("%d | ", vetor[i]);
	}
	printf("\n\nOs valores de Indices Pares: ");
	for (i = 2; i<10; i=i+2)
	{
		printf("%d | ", vetor[i]);
	}
	printf ("\n\nOs valores digitados negativos:");
	for (i = 0; i<10; i++)
	{
		if ( vetor[i] < 0)
		{
			printf("%d | ", vetor[i]);
		}
		
	}
	printf("\n\nOs valores pares:");
	{
		if ( vetor[i] % 2==0 )
		{
			printf("%d | ", vetor[i]);
		}
		
	}
	return 0;

}
