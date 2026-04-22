#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor1, valor2, producto;

	printf("Ejercicio 3 - Ingresar 2 valores e imprimir producto\n");

	printf("Ingrese su primer valor:\n");
	scanf_s("%d", &valor1);
	printf("Ingrese su segundo valor:\n");
	scanf_s("%d", &valor2);

	if (valor1 > valor2)
	{
		producto = valor1 * valor2;
		printf("El producto de ambos numeros es: %d\n", producto);
	}
	else
	{
		if (valor1 == valor2)
		{
			printf("Sus valores son iguales\n");
		}
		else {}
	}

	system("pause");

}
