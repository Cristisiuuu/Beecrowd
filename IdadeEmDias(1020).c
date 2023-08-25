#include <stdio.h>

int main() {
    int idade_em_dias;
    
    scanf("%d", &idade_em_dias);
    
    printf("%d ano(s)\n", idade_em_dias / 365);
    printf("%d mes(es)\n", (idade_em_dias % 365) / 30);
    printf("%d dia(s)\n", ((idade_em_dias % 365) % 30) % 30);
    
    return 0;
}

