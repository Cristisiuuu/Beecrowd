#include <stdio.h>
 
int main() {
	double tempo_gasto, velocidade;
	
	scanf("%lf %lf", &tempo_gasto, &velocidade);
	
	velocidade = velocidade / 12;
	
	printf("%.3lf\n", velocidade * tempo_gasto);
   
    return 0;
}
