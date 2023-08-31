#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int values[N];
    int count[2001] = {0};

    for (int i = 0; i < N; i++) {
        scanf("%d", &values[i]);
        count[values[i]]++;
    }

    for (int i = 1; i <= 2000; i++) {
        if (count[i] > 0) {
            printf("%d aparece %d vez(es)\n", i, count[i]);
        }
    }

    return 0;
}
