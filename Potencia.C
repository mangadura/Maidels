#include <stdio.h>
int main() {
    double base;
    int expoente;
    double resultado = 1;
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o espoente (pode ser negativo): ");
    scanf("%d", &expoente);
    int exp_abs = expoente;
    if (exp_abs < 0) {
        exp_abs = -exp_abs;
    }
    for (int i = 0; i < exp_abs; i++) {
        resultado *= base;
    }
    if (expoente < 0) {
        resultado = 1.0 / resultado;
    }
    printf("%.2f elevado a %d = %.10f\n", base, espoente, resultado);

    return 0;
}
