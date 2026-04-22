#include <stdio.h>

int main()
{
	int valorauto, cantauto, sueldo;

	printf("Ejercicio 1 - Calculo sueldo concesionaria\n");
	printf("Ingrese el valor del vehiculo:\n");
	scanf_s("%d", &valorauto);
	printf("Ingrese la cantidad de vehiculos:\n");
	scanf_s("%d", &cantauto);
	sueldo = (valorauto * 10 / 100) * cantauto + 50 * cantauto + 500;
	printf("Su sueldo es: %d Pesos \n ", sueldo);
}