
#include <stdio.h>

int main()
{
	int valor = 0, positivos = 0, ceros = 0, negativos = 0;

	for (int i = 0; i < 6; i++)
	{
		printf("Ingrese el valor %d:\n", i);
		scanf_s("%d", &valor);
		if (valor > 0)
		{
			positivos += 1;
		}
		else if (valor == 0)
		{
			ceros++;
		}
		else
		{
			negativos++;
		}
	}
	
	printf("Sus positivos son: %d\n Sus ceros son: %d\n Sus negativos son: %d.\n", positivos, ceros, negativos);
}
