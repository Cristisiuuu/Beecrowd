#include <stdio.h>

int main() {
    double n1, n2, n3, n4, exame;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    printf("Media: %.1lf\n", (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10);

    if ((n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10 >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if ((n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10 < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        if (((((n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10)+exame)/2) >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", ((((n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10)+exame)/2));
    }

    return 0;
}
