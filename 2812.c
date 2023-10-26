#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int compara(int *a, int *b)
{	return *a - *b;}
int compara2(int *a, int *b)
{	return *b - *a;}

int main (int argc, char **argv)
{
	int i, j, tmp, n, c, k, z;

	scanf("%d", &c);

	while(c--)
	{
		scanf("%d", &n);

		int vet1[n];
		int vet2[n];
		for (i = 0, j = 0; i < n; ++i)
		{
			scanf("%d", &tmp);

			if (tmp % 2 != 0)
				vet1[j] = vet2[j] = tmp, ++j;
		}
		
		qsort(vet1, j, sizeof(int), compara);
		qsort(vet2, j, sizeof(int), compara2);

		k = z = 0;
		_Bool flag = false;
		for (i = 0; i < j; ++i)
		{
			if (i % 2 == 0)
				if (flag)
					printf(" %d", vet2[k++]);
				else
					printf("%d", vet2[k++]), flag = true;
			else
				if (flag)
					printf(" %d", vet1[z++]);
				else
					printf("%d", vet1[z++]), flag = true;
		}
		printf("\n");
	}
	return 0;

}
