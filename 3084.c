#include <stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%02d:%02d\n", a / 30, b / 6);
    }
    return 0;
}
