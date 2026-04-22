#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor1;

	printf("Ejercicio 2 - Valor positivo, negativo o neutro\n");

	printf("Ingrese un valor:\n");

	scanf_s("%d", &valor1);


	if (valor1 > 0)
	{
		printf("Su valor es positivo\n");
	}
	else
	{
		if (valor1 < 0)
		{
			printf("Su valor es negativo\n");
		}
		else
		{
			printf("Su valor es neutro\n");
		}
	}

	system("pause");

}
