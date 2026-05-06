#include <stdio.h>

int main()
{
	int n = 0, valor = 0, cantpos = 0, cantneg = 0, prompos = 0, promneg = 0, ceros = 0, sumapos = 0, sumaneg = 0;


	printf("Ingrese le cantidad de valores que ingresara: \n");
	scanf_s("%d", &n);

	int i = 0;

	while (i < n)
	{
		i++;


		printf("Ingrese un valor: \n");
		scanf_s("%d", &valor);

		if (valor > 0)
		{
			cantpos++;
			sumapos += valor;
		}
		else if (valor == 0)
		{
			ceros++;
		}
		else
		{
			cantneg++;
			sumaneg += valor;
		}

	}

	if (cantneg > 0)
	{
		promneg = sumaneg / cantneg;
	}

	if (cantpos > 0)
	{
		prompos = sumapos / cantpos;
	}

	printf("El promedio de sus positivos es de: \n%d", prompos);
	printf("El promedio de sus negativos es de: \n%d", promneg);
	printf("Sus ceros son: \n%d", ceros);
}