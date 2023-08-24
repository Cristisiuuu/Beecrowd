#include <stdio.h>
#include <stdlib.h>

int main() {
    double M[12][12];
    char operacao;

    scanf("%c", &operacao);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    double soma = 0;
    int elementos = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            soma += M[i][j];
            elementos++;
        }
    }

    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } 
	else if (operacao == 'M') {
        double media = soma / elementos;
        printf("%.1lf\n", media);
    } 
	else {
        exit(1);
    }
    
    return 0;
}
