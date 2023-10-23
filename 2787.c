#include <stdio.h>

int main (){
	int linha, coluna;
	scanf("%d %d", &linha, &coluna);

	if (linha % 2 == 0 && coluna % 2 == 0)
		printf("1\n");
	else if (linha % 2 == 1 && coluna % 2 == 1)
		printf("1\n");
	else
		printf("0\n");
	return 0;
}
