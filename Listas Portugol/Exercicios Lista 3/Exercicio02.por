programa
{
	
	funcao inicio()
	{
		cadeia nome_prod
		real qtd, preco, desconto, total
		escreva ("Digite o nome do Produto: ")
		leia (nome_prod)
		escreva ("Digite a quantidade: ")
		leia (qtd)
		escreva ("Digite o preco unitario: ")
		leia (preco)
		total = qtd * preco
		se (qtd <= 20)
		{
			desconto = total - (total * 0.02) 
				escreva ("Voce recebeu um desconto de 2% e o valor final ficou : ", desconto, " de: ", total)
		}
		senao 
			se (qtd > 20)
		{
		
			desconto = total - (total * 0.05)
				escreva ("Voce recebeu um desconto de 5% e o valor final ficou : ", desconto, " de: ", total)
		}
		
		}
	}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 146; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */