#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double soma = 0.0;

    for (int i = 1; i <= n; i++) {
        double a[2];
        scanf("%lf", &a[0]);
        scanf("%lf", &a[1]);
        soma += a[0] / a[1];
    }

    if (soma <= 1.0) {
        printf("OK\n");
    } else {
        printf("FAIL\n");
    }

    return 0;
}
