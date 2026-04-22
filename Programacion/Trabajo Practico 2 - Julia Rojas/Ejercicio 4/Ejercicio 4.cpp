#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor1, valor2, resta;

	printf("Ejercicio 4 - Ingresar 2 valores, resta\n");

	printf("Ingrese su primer valor:\n");
	scanf_s("%d", &valor1);
	printf("Ingrese su segundo valor:\n");
	scanf_s("%d", &valor2);


	if (valor1 > valor2)
	{
		resta = valor1 - valor2;
		printf("Su resultado es: %d\n", resta);
	}
	else
	{
		resta = valor2 - valor1;
		printf("Su resultado es: %d\n", resta);
	}

	system("pause");

}
