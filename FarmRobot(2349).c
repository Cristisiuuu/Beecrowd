#include <stdio.h>

int main() {
    int N, C, S;
    int position = 1; 
    int count = 0; 
    
    scanf("%d %d %d", &N, &C, &S);

    for (int i = 0; i < C; i++) {
        int command;
        scanf("%d", &command);

        if (command == 1) {
            position = (position % N) + 2;
        } else {
            position = (position - 2 + N) % N + 2;
        }

        if (position == S) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
