#include <stdio.h>

int main(){
	int num_func, horas;
	double horas_trab;
	
	scanf("%d %d %lf", &num_func, &horas, &horas_trab);
	
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num_func, horas*horas_trab);
	
	return 0;
}
