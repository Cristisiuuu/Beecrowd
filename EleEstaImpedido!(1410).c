#include <stdio.h>
 
int main() {
    int Atacante, Defensor, i, B[11], j, C[11];
    
    while (1) {
        scanf("%d %d", &Atacante, &Defensor);
        
        if (Atacante == 0 && Defensor == 0) {
            break;
        }
        
        if (Atacante >= 2 && Defensor <= 11) {
        
            for (i = 0; i < Atacante; i++) {
                scanf("%d", &B[i]);
            }
            for (j = 0; j < Defensor; j++) {
                scanf("%d", &C[j]);
            }

            for (j = 1; j < Defensor; j++) {
                int key = C[j];
                int k = j - 1;
                
                while (k >= 0 && C[k] > key) {
                    C[k + 1] = C[k];
                    k = k - 1;
                }
                C[k + 1] = key;
            }
            
            int offside = 0;
            for (i = 0; i < Atacante; i++) {
                if (B[i] < C[1]) {
                    offside = 1;
                    break;
                }
            }
            
            if (offside) {
                printf("Y\n");
            } else {
                printf("N\n");
            }
        }
    }
    
    return 0;
}
