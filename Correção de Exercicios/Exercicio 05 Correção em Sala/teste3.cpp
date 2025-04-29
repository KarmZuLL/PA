#include <stdio.h>
#include <locale.h>
main()
{
	char nome[120];
	int ano_atual, ano_nasc, idade;
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	printf("Digite o ano de nascimento: ");
	scanf("%d", &ano_nasc);
	idade= ano_atual - ano_nasc;
	printf("O Nosso amigo %s, tem a idade de : %d", nome, idade);
	

}
