#include<stdio.h>

int main(){
	
    float a,b,c,perimetro,area;
    scanf("%f %f %f",&a,&b,&c);
    
    if((a+b)>c&&(b+c)>a&&(c+a)>b){
        perimetro=a+b+c;
        printf("Perimetro = %.1f\n",perimetro);
    }
    else{
        area=.5*(a+b)*c;
        printf("Area = %.1f\n",area);
    }
    return 0;
}