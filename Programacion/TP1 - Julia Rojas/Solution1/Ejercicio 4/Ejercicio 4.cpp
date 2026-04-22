#include <stdio.h>

int main()
{
	int valor1, valor2, valor3, perimetro;

	printf("Ejercicio 1 - Perimetro de triangulo\n");
	printf("Ingrese su primer lado:\n");
	scanf_s("%d", &valor1);
	printf("Ingrese su segundo lado:\n");
	scanf_s("%d", &valor2);
	printf("Ingrese su tercer lado:\n");
	scanf_s("%d", &valor3);
	perimetro = valor1 + valor2 + valor3;
	printf("El perimetro de su triangulo es: %d \n ", perimetro);
}