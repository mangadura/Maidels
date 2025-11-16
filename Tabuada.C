#include <stdio.h>

int main() {
    int n, i;

    while (1) {
        printf("(づ｡◕‿‿◕｡)づDigite um numero para ver a tabuada(0 para sair)(づ｡◕‿‿◕｡)づ: ");
        scanf("%d", &n);

        if (n == 0) {
            printf("Encerrando...\n");
            break;
        }

        printf("\nTabuada do %d:\n\n", n);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }

        printf("\n");
    }

    return 0;
}