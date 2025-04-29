#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char prod[30], op;
    float pr, va, vf, vp;
    int qt, pa, fp;

    printf("\t\t...CALCULO FORMA DE PAGAMENTO DE PRODUTOS...\n\n");

    do {
        printf("Digite o produto: ");
        scanf("%s", prod);  // Corrigido: sem & porque 'prod' já é um ponteiro
        printf("Digite o Preco: ");
        scanf("%f", &pr);
        printf("Digite a quantidade: ");
        scanf("%d", &qt);
        va = pr * qt;

        do {
            printf("\n\t 1- A Vista (DESC. 15%)\n");
            printf("\t 2- Até 5X  sem juros \n");
            printf("\t 3- Mais de 5X (6A10)-Juros 10%\n");
            printf("\n\t\t Opção ->>");
            scanf("%d", &fp);
        } while (fp < 1 || fp > 3);

        if (fp == 1) {  // Corrigido: removido o ponto e vírgula extra
            vf = va * 0.85;
            printf("O Produto %s pagará RS%.2f com desconto de 15%\n\n", prod, vf);
        } else if (fp == 2) {  // Corrigido: removido o ponto e vírgula extra
            do {
                printf("Digite a quantidade de parcelas (1A5): ");
                scanf("%d", &pa);
            } while (pa < 1 || pa > 5);
            vp = va / pa;
            printf("\n\t O Produto %s com valor final de R$%.2f pagará R$%.2f em %d parcelas\n\n", prod, va, vp, pa);
        } else {
            vf = va * 1.10;
            do {
                printf("Digite N:Parcelas(6A10): ");
                scanf("%d", &pa);
            } while (pa < 6 || pa > 10);

            vp = vf / pa;
            printf("O Produto %s com valor final R$%.2f pagará %d parcelas de R$%.2f\n\n", prod, vf, pa, vp);
        }

        printf("Digite '!' para o novo calculo: ");
        scanf(" %c", &op);  // Corrigido: espaço antes de %c para limpar o buffer
    } while (op == '!');
    

    
}

