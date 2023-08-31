#include <stdio.h>
 
int main() {
	int codigo, quant;
	float valor, total;
	
	scanf("%d", &codigo);
	switch(codigo){
		case(1):
			valor = 4.00;
			scanf("%d", &quant);
			printf("Total: R$ %.2f\n",quant*valor);
			break;
		case(2):
			valor = 4.50;
			scanf("%d", &quant);
			printf("Total: R$ %.2f\n",quant*valor);
			break;
		case(3):
			valor = 5.00;
			scanf("%d", &quant);
			printf("Total: R$ %.2f\n",quant*valor);
			break;
		case(4):
			valor = 2.00;
			scanf("%d", &quant);
			printf("Total: R$ %.2f\n",quant*valor);			
			break;
		case(5):
			valor = 1.50;
			scanf("%d", &quant);
			printf("Total: R$ %.2f\n",quant*valor);
			break;	
	}
    return 0;
}