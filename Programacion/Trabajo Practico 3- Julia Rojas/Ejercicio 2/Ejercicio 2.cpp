
#include <stdio.h>

int main()
{
	int valor = 0, cant_valores = 0, positivos = 0, ceros = 0, negativos = 0;

	while (cant_valores < 10)
	{
		printf("Ingrese el valor %d:\n", cant_valores);
		scanf_s("%d", &valor);
		cant_valores += 1;
		if (valor > 0)
		{
			positivos += 1;
		}
		else
		{
			if (valor == 0)
			{
				ceros += 1;
			}
			else
			{
				negativos += 1;
			}
		}
	}
	
	printf("Sus positivos son: %d\n Sus ceros son: %d\n Sus negativos son: %d.\n", positivos, ceros, negativos);
}
