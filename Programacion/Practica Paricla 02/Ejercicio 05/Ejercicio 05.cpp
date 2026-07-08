#include <stdio.h>

int entradaDatos()
{
	int numero = 0;
	printf("Indique un numero entero: \n");
	scanf_s("%d", &numero);

	return numero;
}

int procesoDatos(int numero, int *parOimpar, int *valorAbosluto)
{
	int resto = numero % 2;
	int cuadrado = numero * numero;
	if (resto == 1)
	{
		*parOimpar = 1;
	}
	else
	{
		*parOimpar = 0;
	}

	if (numero > 0)
	{
		*valorAbosluto = numero;
	}
	else
	{
		*valorAbosluto = numero * -1;
	}

	return cuadrado;
}

void salidaDatos(int numero, int parOimpar, int valorAbosluto, int cuadrado)
{
	printf("El numero es %d", numero);
	if (parOimpar == 1)
	{
		printf("El numero es impar");
	}
	else
	{
		printf("El numero es par");
	}
	printf("El cuadrado es: %d", cuadrado);
	printf("El valor aboluto es: %d", valorAbosluto);
}

int main()
{
	int numero = entradaDatos();
	int parOimpar, valorAbsoluto, cuadrado;
	cuadrado = procesoDatos(numero, &parOimpar, &valorAbsoluto);
	salidaDatos(numero, parOimpar, valorAbsoluto, cuadrado);

	return 0;
}