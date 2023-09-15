#include <stdio.h>

int main() {
	int T;
    scanf("%d", &T);

    while (T--) {
    	int C, D;
        scanf("%d %d", &C, &D);
        if(C==0 && D==0){
        	printf("0\n");
        	break;
		}

        long long quantidade_placas = 1;
        for (int i = 0; i < C; i++) {
            quantidade_placas *= 26;
        }
        for (int i = 0; i < D; i++) {
            quantidade_placas *= 10;
        }

        printf("%lld\n", quantidade_placas);
    }
    return 0;
}
