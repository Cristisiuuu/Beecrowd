#include<stdio.h>

int main(){
	int a,b,c[10000], fail, ans;
	
	do{
		ans=1;
		scanf("%d", &a);
		do{
			fail=0;
			for(b=1;b<=a;b++){
				scanf("%d", &c[b]);
				if(b!=c[b] && fail==0){
					fail=1;
					ans++;
				}
			}
		}
		while(fail==1);
		if(a>0){
			printf("%d\n", ans);
		}
	}
	while(a>0);
	return 0;
}