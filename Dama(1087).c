#include <stdio.h>
#include <stdlib.h> // Incluir a biblioteca para usar a função abs

int main() {
    int x1, y1, x2, y2, num;
    
    while (1) { // Usar um loop infinito para ler entradas até encontrar 0 0 0 0
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            break; // Se todas as coordenadas forem 0, sair do loop
        
        if (x1 == x2 && y1 == y2)
            printf("0\n");
        else if (x1 == x2 || y1 == y2)
            printf("1\n");
        else if (abs(x1 - x2) == abs(y1 - y2))
            printf("1\n");
        else
            printf("2\n");
    }
    return 0;
}
