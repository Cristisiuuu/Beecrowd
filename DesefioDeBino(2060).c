#include<stdio.h>

int main(){
	int numero, i, num;
	int contador = 0;
	int contador1 = 0;
	int contador2 =0;
	int contador3 =0;
		
	scanf("%d", &numero);
	
	for(i=0; i<numero; i++){
		scanf("%d", &num);
		
		if(num % 2 == 0){
			contador++;
		}
		if(num % 3 == 0){
			contador1++;
		}
		if(num % 4 == 0){
			contador2++;
		}
		if(num % 5 == 0){
			contador3++;
		}
	}
	printf("%d Multiplo(s) de 2\n", contador);
	printf("%d Multiplo(s) de 3\n", contador1);
	printf("%d Multiplo(s) de 4\n", contador2);
	printf("%d Multiplo(s) de 5\n", contador3);
	return 0;
}
