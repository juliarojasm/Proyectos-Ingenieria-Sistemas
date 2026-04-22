#include <stdio.h>

int main()
{
	int valor1, valor2, suma;

	printf("Ejercicio 1 - Suma de 2 variables\n");
	printf("Ingrese su primer valor:\n");
	scanf_s("%d", &valor1);
	printf("Ingrese su segundo valor:\n");
	scanf_s("%d", &valor2);
	suma = valor1 + valor2;
	printf("El resultado de la suma es: %d", suma);
}
