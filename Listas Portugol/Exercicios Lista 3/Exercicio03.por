programa
{
	
	funcao inicio()
	{
		cadeia nome
		real peso, altura, imc
		
		escreva ("Digite o seu nome: ")
		leia (nome)
		escreva ("Digite o seu peso: ")
		leia (peso)
		escreva ("Digite a sua altura: ")
		leia (altura)
		imc = peso/ (altura * altura)
		se (imc <= 18)
		{
			escreva ("Seu valor de IMC e: ", imc, " é classificado como BAIXO PESO!")			
		}
		senao 
		se (imc >= 18 e imc <= 24)
		{
			escreva ("Seu valor de IMC e: ", imc, " é classificado como PESO NORMAL")
		}
		senao
		{
			escreva ("Seu valor de IMC e: ", imc, " é classificado como OBESO")
		}
		
		}
	}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 105; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */