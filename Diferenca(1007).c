#include <stdio.h>

int main(){
	int num1, num2, num3, num4, diferenca;
	
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
	
	diferenca = ((num1*num2) - (num3*num4));
	
	printf("DIFERENCA = %d\n", diferenca);
	
	return 0;
}
