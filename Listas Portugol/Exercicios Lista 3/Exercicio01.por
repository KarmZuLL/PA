programa
{
	
	funcao inicio()
	{
		cadeia nome
		real n1, n2, n3, n4, media	
		escreva ("Digite o seu nome: ")
		leia (nome)
		escreva ("Digite a N1: ")
		leia (n1)
		escreva ("Digite a N2: ")
		leia (n2)
		escreva ("Digite a N3: ")
		leia (n3)
		escreva ("Digite a N4: ")
		leia (n4)
		media = (n1+n2+n3+n4)/4
		se (media >= 8 e media <= 10)
		{
			escreva (nome, " A sua media foi de : ", media, " E recebeu a Classificação A")
		}
		se (media >= 7 e media <= 7.9)
		{
			escreva (nome, " A sua media foi de : ", media, " E recebeu a Classificação B")
		}
		se (media >= 5 e media <= 6.9)
		{
			escreva (nome, " A sua media foi de : ", media, " E recebeu a Classificação C")
		}
		se (media <=5)
		{
			escreva (nome, " A sua media foi de : ", media, " e recebeu a classificao D")
		}

		
		}

		
		}
		


/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 794; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */