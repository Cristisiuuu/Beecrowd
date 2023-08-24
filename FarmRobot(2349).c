#include <stdio.h>

int main() {
    int n[3];
    scanf("%d %d %d", &n[0], &n[1], &n[2]);

    int pos = 1;
    int cont = (n[2] == 1) ? 1 : 0;

    for (int i = 0; i < n[1]; i++) {
        int comando;
        scanf("%d", &comando);

        pos += comando;

        if (pos > n[0]) {
            pos = 1;
        } 
        else if (pos < 1) {
            pos = n[0];
        }
        if (pos == n[2]) {
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}
