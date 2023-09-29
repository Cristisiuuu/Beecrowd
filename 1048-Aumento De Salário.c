#include <stdio.h>

int main() {
    double salario, novo_salario, reajuste;
    int porcentagem;

    scanf("%lf", &salario);

    if (salario >= 0.00 && salario <= 400.00) {
        porcentagem = 15;
    } else if (salario <= 800.00) {
        porcentagem = 12;
    } else if (salario <= 1200.00) {
        porcentagem = 10;
    } else if (salario <= 2000.00) {
        porcentagem = 7;
    } else {
        porcentagem = 4;
    }

    reajuste = salario * porcentagem / 100.0;
    novo_salario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", porcentagem);

    return 0;
}
