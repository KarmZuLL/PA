#include <stdio.h>

int main() {
    float valores[20];
    int i;

    // Lendo os 20 valores
    for (i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    // Mostrando os valores nas posi��es pares (�ndices 2, 4, 6, ..., 18)
    printf("\nValores nas posi��es pares do vetor:\n");
    for (i = 2; i < 20; i += 2) {
        printf("Posi��o %d: %.2f\n", i, valores[i]);
    }

}

