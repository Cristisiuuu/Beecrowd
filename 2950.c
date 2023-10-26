#include<stdio.h>

int main(){
	float distancia, diametro1, diametro2;
	float ICM;
	
	scanf("%f %f %f", &distancia, &diametro1, &diametro2);
	
	ICM = distancia /(diametro1 + diametro2);
	printf("%.2f\n", ICM);
	
	return 0;
}