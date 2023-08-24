#include <stdio.h>
#include <math.h>

struct coordenada {
    double x;
    double y;
};

int main() {
    struct coordenada co1, co2;

    scanf("%lf %lf %lf %lf", &co1.x, &co1.y, &co2.x, &co2.y);

    double distancia = sqrt(pow(co2.x - co1.x, 2) + pow(co2.y - co1.y, 2));

    printf("%.4lf\n", distancia);
    return 0;
}

