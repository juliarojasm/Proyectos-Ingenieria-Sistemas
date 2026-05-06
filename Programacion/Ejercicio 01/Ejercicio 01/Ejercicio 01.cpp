#include <stdio.h>

int main()
{
	int n = 0, sueldo = 0, suma = 0, promedio = 0;

	printf("Ingrese el numero de sueldos a ingresar.\n");
	scanf_s("%d", &n);

	int i = 0;

	while (i < n)
	{
		printf("Ingrese el sueldo:\n");
		scanf_s("%d", &sueldo);
		i += 1;

		suma += sueldo;
	}

	promedio = suma / n;

	printf("La suma de los sueldos es de: \n%d", suma);
	printf("El promedio de los sueldos es de: \n%d", promedio);
}