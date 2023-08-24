#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int maiorAB = (num1 + num2 + abs(num1 - num2)) / 2; 
    int maiorABC = (maiorAB + num3 + abs(maiorAB - num3)) / 2; 
    
    printf("%d eh o maior\n", maiorABC);
    
    return 0;
}

