#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valorh, tiempot, sueldo;

	printf("Ejercicio 7 - Sueldo\n");

	printf("Ingrese el valor de la hora:\n");
	scanf_s("%d", &valorh);
	printf("Ingrese el tiempo trabajado:\n");
	scanf_s("%d", &tiempot);

	sueldo = valorh * tiempot;

	if (tiempot >= 150)
	{
		sueldo = sueldo + 150;
		printf("Su sueldo es: %d pesos\n", sueldo);
	}
	else
	{
		if (tiempot >= 50)
		{
			sueldo = sueldo + 100;
			printf("Su sueldo es de: %d pesos\n", sueldo);
		}
		else
		{
			printf("Su sueldo es de: %d pesos\n", sueldo);
		}
	}

	system("pause");

}