#include <stdio.h>
#include <locale.h>
int main {
	setlocale (LC_ALL,"Portuguese");
	
	int vetor[10], i;
	
	for (i = 0; i<10; i++)
	{
		printf("Digite o %dº numero: ", i+1);
		scanf ("%d", &vetor[i]);
	}
	printf("Os Valores Digitados: ");
	for (i = 0; i<10; i++)
	{
		printf("%d | ", vetor[i]);
	}
	return 0;

}
