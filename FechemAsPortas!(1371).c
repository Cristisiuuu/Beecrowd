#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }

        int *v = (int *)malloc(sizeof(int) * n);
        int count = 0;

        for (i = 1; i * i <= n; i++) {
            v[count++] = i * i;
        }

        for (i = 0; i < count; i++) {
            if (i == 0) {
                printf("%d", v[i]);
            } else {
                printf(" %d", v[i]);
            }
        }
        printf("\n");

        free(v);
    }

    return 0;
}

