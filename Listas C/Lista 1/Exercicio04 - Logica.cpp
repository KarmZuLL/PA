#include <stdio.h>
main()
{
	char nome [100];
	float salario, aumento, calculo;
	printf("Digite o seu nome: ");
	scanf ("%s", &nome);
	printf("Digite o seu salario: ");
	scanf ("%f", &salario);
	printf("Digite o porcentual do aumento: ");
	scanf ("%f", &aumento);
	calculo = aumento/100 * salario + salario;
	printf("%s seu salario com aumento fico no valor de : %.2f", nome, calculo);
}
