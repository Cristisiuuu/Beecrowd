#include <stdio.h>
 
int main() {
 
    int num1, num2, num3, num4;
    
    scanf("%d %d %d %d",&num1, &num2, &num3, &num4);
    if(num2>num3 && num4>num1 && num3+num4 > num1+num2 && num3>0 && num4>0 && num1%2==0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}
