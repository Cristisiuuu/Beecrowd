#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, quant;
    char v[51], cifra[51];
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%s", v);
        scanf("%d", &quant);
        
        int tamanho = strlen(v);
        
        for (j = 0; j < tamanho; j++) {
            char c = v[j];
            
            if (c >= 'A' && c <= 'Z') {
                c -= quant;
                if (c < 'A') {
                    c += 26;
                }
            }
            cifra[j] = c;
        }
        cifra[tamanho] = '\0';   
        printf("%s\n", cifra);
    }
    
    return 0;
}
