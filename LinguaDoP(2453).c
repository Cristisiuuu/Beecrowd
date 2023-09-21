#include <stdio.h>

int main() {
    char c;
    
    while ((c = getchar()) != EOF) {
        if (c == 'p') {
            char nextChar = getchar();
            if ((nextChar >= 'a' && nextChar <= 'z') || (nextChar >= 'A' && nextChar <= 'Z')) {
                putchar(nextChar);
            } else {
                putchar(c);
            }
        } else {
            putchar(c);
        }
    }
    return 0;
}
