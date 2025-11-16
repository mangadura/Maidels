#include <stdio.h>

int main() {
    int n;

    while (1) {
        printf("\nDigite quantos termos da Fibonacci deseja ver(◠‿◠) (0 para sair): ");
        scanf("%d", &n);

        if (n == 0) {
            printf("Encerrando...\n");
            break;
        }
        if (n < 0) {
            printf("Nao existe Fibonacci para numeros negativos!\n");
            continue;  
        }
        int a = 0, b = 1, proximo;

        printf("Fibonacci: ");

        if (n == 1) {
            printf("%d\n", a);
            continue;
        }

        printf("%d %d ", a, b);

        for (int i = 2; i < n; i++) {
            proximo = a + b;
            printf("%d ", proximo);
            a = b;
            b = proximo;
        }

        printf("\n");
    }

    return 0;
}