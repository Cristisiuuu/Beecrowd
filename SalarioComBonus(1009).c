#include <stdio.h>

int main(){
	char nome[50];
	double salario, montante;
	
	scanf("%s", &nome);
	scanf("%lf %lf", &salario, &montante);
	
	printf("TOTAL = R$ %.2lf\n", (montante * 0.15)+salario);
	
	return 0;
}
