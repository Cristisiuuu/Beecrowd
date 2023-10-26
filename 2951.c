#include <stdio.h>

int main() {
    int runas, amizades, coleta, amizade =0;
    int valores[26] = {0};
    
    scanf("%d %d", &runas, &amizades);

    for (int i = 0; i < runas; i++) {
        char runa;
        int valor;
        scanf(" %c %d", &runa, &valor);
        valores[runa - 'A'] = valor; 
    }

    scanf("%d", &coleta);

    for (int i = 0; i < coleta; i++) {
        char runa;
        scanf(" %c", &runa); 
        amizade += valores[runa - 'A']; 
    }

    if (amizade >= amizades) {
        printf("%d\nYou shall pass!\n", amizade);
    } else {
        printf("%d\nMy precioooous\n", amizade);
    }
    return 0;
}
