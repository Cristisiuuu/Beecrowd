#include <stdio.h>

int main() {
    int N;
    char comandos[1001];
    
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        
        scanf("%s", comandos);
        
        char direcao = 'N';
        
        for (int i = 0; i < N; i++) {
            if (comandos[i] == 'E') {
                if (direcao == 'N') direcao = 'O';
                else if (direcao == 'O') direcao = 'S';
                else if (direcao == 'S') direcao = 'L';
                else if (direcao == 'L') direcao = 'N';
            } 
			else if (comandos[i] == 'D') {
                if (direcao == 'N') direcao = 'L';
                else if (direcao == 'L') direcao = 'S';
                else if (direcao == 'S') direcao = 'O';
                else if (direcao == 'O') direcao = 'N';
            }
        }
        
        printf("%c\n", direcao);
    }
    
    return 0;
}
