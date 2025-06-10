#include <stdio.h>

int main() {
    int n, i;
    int a = 1, b = 1, proximo;

    printf("Digite a quantidade de termos da série de Fibonacci: ");
    scanf("%d", &n);

    printf("%d ", a);
    if (n > 1) {
        printf("%d ", b);
    }

    for (i = 3; i <= n; i++) {
        proximo = a + b;
        printf("%d ", proximo);
        a = b;
        b = proximo;
    }

    return 0;
}

