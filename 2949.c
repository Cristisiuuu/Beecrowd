#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    int contagem[5] = {0};
    for (int i = 0; i < N; i++) {
        char nome[21];
        char tipo;
        scanf("%s %c", nome, &tipo);

        switch (tipo) {
            case 'X':
                contagem[0]++;
                break;
            case 'H':
                contagem[1]++;
                break;
            case 'E':
                contagem[2]++;
                break;
            case 'A':
                contagem[3]++;
                break;
            case 'M':
                contagem[4]++;
                break;
        }
    }
    printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(oes)\n%d Mago(s)\n", contagem[0], contagem[1], contagem[2], contagem[3], contagem[4]);

    return 0;
}
