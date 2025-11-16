#include <stdio.h>

int main() {
    double base;
    int expoente;
    double resultado;
    int i;

    while (1) {
        printf("(ಠ_ಠ)Digite a base(ಠ_ಠ) (0 para sair): ");
        scanf("%lf", &base);

        if (base == 0) {
            printf("Encerrando...\n");
            break;
        }

        printf("┌(・。・)┘♪Digite o expoente┌(・。・)┘♪(pode ser negativo): ");
        scanf("%d", &expoente);

        resultado = 1;

        int exp_abs = expoente;
        if (exp_abs < 0) {
            exp_abs = -exp_abs;
        }

        for (i = 0; i < exp_abs; i++) {
            resultado *= base;
        }

        if (expoente < 0) {
            resultado = 1.0 / resultado;
        }

     
        printf("%g elevado a %d = %g\n\n", base, expoente, resultado);
    }

    return 0;
}