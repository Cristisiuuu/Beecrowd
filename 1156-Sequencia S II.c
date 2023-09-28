#include <stdio.h>

int main() {
    double S = 0.0;
    double Q = 2.0;
    double P = 3.0; 
    int i;

    while(i<=39){
    	S += P /Q;
    	P += 2;
    	Q *= 2;
    	i++;
	}
	S ++;
    printf("%.2lf\n", S);

    return 0;
}

