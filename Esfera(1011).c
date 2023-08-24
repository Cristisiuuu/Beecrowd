#include <stdio.h>
#define pi 3.14159

int main(){
	double raio;
	
	scanf("%lf", &raio);
	
	printf("VOLUME = %.3lf\n", (4/3.0)*pi*(raio*raio*raio));
	return 0;
}

