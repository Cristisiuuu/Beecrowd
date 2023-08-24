#include <stdio.h>
#define pi 3.14159

int main() {
    double num1, num2, num3;
	
    scanf("%lf %lf %lf", &num1, &num2, &num3);
	
    printf("TRIANGULO: %.3lf\n", (num1 * num3) / 2);
    printf("CIRCULO: %.3lf\n", (num3 * num3) * pi);
    printf("TRAPEZIO: %.3lf\n", ((num1 + num2) * num3) / 2); // Corrigido aqui
    printf("QUADRADO: %.3lf\n", num2 * num2);
    printf("RETANGULO: %.3lf\n", num1 * num2);
	
    return 0;
}

