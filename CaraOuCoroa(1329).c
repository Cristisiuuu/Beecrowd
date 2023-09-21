#include <stdio.h>

int main() {
    int n, i, contmaria = 0, contjoao = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break; // Saia do loop se n for igual a zero
        }

        for (i = 0; i < n; i++) {
            int v;
            scanf("%d", &v);

            if (v == 0) {
                contmaria++;
            } else {
                contjoao++;
            }
    	}
        printf("Mary won %d times and John won %d times\n", contmaria, contjoao);

        contmaria = 0;
        contjoao = 0;
    }

    return 0;
}
