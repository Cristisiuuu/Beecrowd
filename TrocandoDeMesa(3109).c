#include<stdio.h>

int main() {
    int N, Q, i, troca = 0, A, B, a = 0, num;
    
    scanf("%d", &N);
    scanf("%d", &Q);
    
    int pos[N + 1];
    
    for (i = 1; i <= N; i++) {
        pos[i] = i;
    }
    
    for (i = 0; i < Q; i++) {
        int E;
        scanf("%d", &E);
        
        if (E == 2) {
            scanf("%d", &num);
            int redirect = 0;
            int currentPos = pos[num];
            
            while (currentPos != num) {
                currentPos = pos[currentPos];
                redirect++;
            }
            
            printf("%d\n", redirect);
        }
        
        if (E == 1) {
            scanf("%d %d", &A, &B);
            int temp = pos[A];
            pos[A] = pos[B];
            pos[B] = temp;
        }
    }
    return 0;
}
