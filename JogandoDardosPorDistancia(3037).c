#include <stdio.h>

int main() {
    int teste;
    scanf("%d", &teste);

    for (int i = 1; i <= teste; i++) {
        int pontos_joao = 0;
        int pontos_maria = 0;
        
        for (int j = 1; j <= 3; j++) {
            int pontuacao, distancia;
            scanf("%d %d", &pontuacao, &distancia);
            
            pontos_joao += (pontuacao * distancia);
        }
        
        for (int j = 1; j <= 3; j++) {
            int pontuacao, distancia;
            scanf("%d %d", &pontuacao, &distancia);
            
            pontos_maria += (pontuacao * distancia);
        }
        
        if (pontos_joao > pontos_maria) {
            printf("JOAO\n");
        } else {
            printf("MARIA\n");
        }
    }
    
    return 0;
}
