#include <stdio.h>

int main()
{
	int valor1, valor2, suma, producto, resta;

	printf("Ejercicio 1 - Calculo de suma, producto y resta de 2 valores\n");
	printf("Ingrese su primer valor:\n");
	scanf_s("%d", &valor1);
	printf("Ingrese su segundo valor:\n");
	scanf_s("%d", &valor2);
	suma = valor1 + valor2;
	producto = valor1 * valor2;
	resta = valor1 - valor2;
	printf("La suma de sus valores es: %d \n ", suma);
	printf("El producto de sus vaslores es: %d \n ", producto);
	printf("La resta de sus valores es: %d \n ", resta);
}