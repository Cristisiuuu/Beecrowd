#include <stdio.h>

struct treino {
    int tempo;
    int duracao;
};

int main() {
    int treinos_feitos;

    while (scanf("%d", &treinos_feitos) != EOF) {
        if (treinos_feitos >= 1 && treinos_feitos <= 30) {
            struct treino treinos[30];
            int recorde_batido[30] = {0};
            
            for (int i = 0; i < treinos_feitos; i++) {
                scanf("%d %d", &treinos[i].tempo, &treinos[i].duracao);
            }
            
            recorde_batido[0] = 1;
            
            for (int i = 1; i < treinos_feitos; i++) {
                double velocidade_atual = (double) treinos[i].duracao / treinos[i].tempo;
                int recorde = 1;
                
                for (int j = 0; j < i; j++) {
                    double velocidade_anterior = (double) treinos[j].duracao / treinos[j].tempo;
                    if (velocidade_atual <= velocidade_anterior) {
                        recorde = 0;
                        break;
                    }
                }
                
                recorde_batido[i] = recorde;
            }

            for (int i = 0; i < treinos_feitos; i++) {
                if (recorde_batido[i]) {
                    printf("%d\n", i + 1);
                }
            }
        }
    }

    return 0;
}
