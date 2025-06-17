#include <stdio.h>
#include <locale.h>
main ()
/*Solicitar a idade de várias pessoas e imprimir: Quantidade de pessoas
com menos de 21 anos. Quantidade de pessoas com mais de 50 anos. O
programa termina quando idade digitada for -99*/

{
	setlocale (LC_ALL, "Portuguese");
	
	int idade, cont21=0, cont50=0;
	
	do 
		printf ("Digite sua idade: ");
		scanf ("%d", &idade);
		if (idade != 99 )
		{
			else 
				if (idade <21)
				{
					cont21= cont21+1;
				}
				else 
					if (idade >50)
					{
						cont50= cont50 +1;
					}
		
		}
		
	while (idade != -99);
	printf("\n\n Quantidades de Pessoa Menores do que 21: %d", cont21);
	printf("\n\n Quantidades de Pessoa Maiores do que 50: %d", cont50);
		
	
	
		
}
