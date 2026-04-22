#include <stdio.h>

int main()
{
	int valor1, valor2, valor3, suma;

	printf("Ejercicio 1 - Suma de 3 variables en 2 partes\n");
	printf("Ingrese su primer valor:\n");
	scanf_s("%d", &valor1);
	printf("Ingrese su segundo valor:\n");
	scanf_s("%d", &valor2);
	printf("Ingrese su tercer valor:\n");
	scanf_s("%d", &valor3);
	suma = valor1 + valor2;
	suma = suma + valor3;
	printf("El resultado de la suma es: %d \n ", suma);
}