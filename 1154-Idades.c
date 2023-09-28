#include<stdio.h>

int main(){
	double media = 0, contador =0,  idades = 0;
	
	while(idades >= 0){
		
		scanf("%lf", &idades);
		if(idades>=0){
			media += idades;
			contador++;
		}
	}
	media = media /contador;
	printf("%.2lf\n", media);
	
	return 0;
}
