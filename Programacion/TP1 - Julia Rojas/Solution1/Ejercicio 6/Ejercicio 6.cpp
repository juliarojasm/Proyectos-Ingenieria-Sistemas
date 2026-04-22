#include <stdio.h>
#include <math.h> //libreria para el sqrt

int main()
{
	double valor1, valor2, hipotenusa, perimetro, superficie;

	printf("Ejercicio 1 - Calculo de diagonal, perimetro y superficie de rectangulo\n");
	printf("Ingrese su primer lado:\n");
	scanf_s("%lf", &valor1);
	printf("Ingrese su segundo lado:\n");
	scanf_s("%lf", &valor2);
	hipotenusa = sqrt(valor1 * valor1 + valor2 * valor2); //hipotenusa = diagonal
	perimetro = valor1 * 2 + valor2 * 2;
	superficie = valor1 * valor2;
	printf("La diagonal principal de su rectangulo es: %lf \n ", hipotenusa);
	printf("El perimetro de su rectangulo es: %lf \n ", perimetro);
	printf("La superficie de su rectangulo es: %lf \n ", superficie);
}