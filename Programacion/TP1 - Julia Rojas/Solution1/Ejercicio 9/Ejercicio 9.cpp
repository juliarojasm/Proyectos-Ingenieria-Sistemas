#include <stdio.h>

int main()
{
	int valor1, sueldo;

	printf("Ejercicio 1 - Calculo sueldo con un solo valor\n");
	printf("Ingrese sus horas trabajadas:\n");
	scanf_s("%d", &valor1);
	sueldo = valor1 * 10;
	printf("Su sueldo es: %d Pesos \n ", sueldo);
}