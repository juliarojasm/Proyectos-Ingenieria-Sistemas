#include <stdio.h>

int main()
{
	int valor1, valor2, sueldo;

	printf("Ejercicio 1 - Calculo sueldo\n");
	printf("Ingrese su salario por hora:\n");
	scanf_s("%d", &valor1);
	printf("Ingrese sus horas trabajadas:\n");
	scanf_s("%d", &valor2);
	sueldo = valor1 * valor2;
	printf("Su sueldo es: %d Pesos \n ", sueldo);
}