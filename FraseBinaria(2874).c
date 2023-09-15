#include <stdio.h>
#include <math.h>
#include <string.h>

void convertStrToInt(char *binarioStr, short *binarioInt, unsigned short tam);
unsigned char calcBinario(short *binarioInt, unsigned short tam);

void main ()
{

	unsigned casos, tamanho;
	short binarioInt[10];
	char binarioStr[10];

	while (scanf("%u", &casos) != EOF)
	{
		while (casos--)
		{
			scanf(" %s", binarioStr);
			tamanho = strlen(binarioStr);
			convertStrToInt(binarioStr, binarioInt, tamanho);
			printf("%c", calcBinario(binarioInt, tamanho));
			memset(binarioStr, 0, sizeof(binarioStr));
		}
		printf("\n");
	}
}
unsigned char calcBinario(short *binarioInt, unsigned short tam)
{
	short i, j, soma = 0;
	for (i = tam - 1, j = 0; i >= 0; i--, j++)
		soma += (binarioInt[i] * pow(2, j));
	return soma;
}

void convertStrToInt(char *binarioStr, short *binarioInt, unsigned short tam)
{
	unsigned short i;
	for (i = 0; i < tam; i++)
		binarioInt[i] = (short)binarioStr[i] - 48;
}
