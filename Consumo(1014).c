#include<stdio.h>

int main(){
	int distancia_km;
	double combustivel_gasto;
	
	scanf("%d %lf", &distancia_km, &combustivel_gasto);
	
	printf("%.3lf km/l\n", distancia_km/combustivel_gasto);
	
	return 0;
}
