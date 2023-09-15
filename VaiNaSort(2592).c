#include <stdio.h>
#include <stdbool.h>

bool verificaOrd(short vet[], short cmp[], unsigned short tam);

void main ()
{

	unsigned short numero, i;
	unsigned short qtsOrd;
	bool resultado;

	while (true)
	{	
		scanf("%hu", &numero);

		if (numero == 0)
			break;

		short caixa[numero];
		short cmp[numero];

		// Enche um vetor compara��o com n�meros que v�o de 1 at� n;
		for (i = 0; i < numero; i++)
			cmp[i] = i+1;

		// Quantidade de tentativas j� come�a com 1
		// Pois mesmo que na primeira tentativa j� fique ordenado
		// Gastou uma tentativa;
		qtsOrd = 1;
		do
		{
			// Enche o vetor principal com a entrada do usu�rio;
			for (i = 0; i < numero; i++)
				scanf("%hu", &caixa[i]);

			// Vari�vel resultado recebe a resposta da fun��o que verifica a ordena��o;
			resultado = verificaOrd(caixa, cmp, numero);

			// Se n�o estiver ordenado; 
			// Quantidade de tentativas aumenta 1;
			if (!resultado)
				qtsOrd++;

		} while (!resultado);
		
		printf("%hu\n", qtsOrd);			

	}


}

bool verificaOrd(short vet[], short cmp[], unsigned short tam)
{

	unsigned short i;

	// Se encontrar um n�mero diferenta em posi��es iguais, o vetor n�o
	// Est� ordenado e a fun��o retorna falso;
	for (i = 0; i < tam; i++)
		if (vet[i] != cmp[i])
			return false;

	return true;

}
