#include <stdio.h>

int main() {
    int num, i;
    char resposta;

    do {
        printf("Digite um n�mero para ver a tabuada: ");
        scanf("%d", &num);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Deseja ver outra tabuada? (s/n): ");
        scanf(" %c", &resposta); // espa�o antes do %c para ignorar o ENTER

    } while (resposta == 's' || resposta == 'S');

    return 0;
}

