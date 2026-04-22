#include <stdio.h>
#include <math.h> //libreria para el sqrt

int main()
{
	double valor1, valor2, hipotenusa, perimetro, superficie; //double por decimales

	printf("Ejercicio 1 - Calculo de hipotenusa, perimetro y superficie\n");
	printf("Ingrese su primer cateto:\n");
	scanf_s("%lf", &valor1); //%lf por mayor cantidad de decimales
	printf("Ingrese su segundo cateto:\n");
	scanf_s("%lf", &valor2);
	hipotenusa = sqrt(valor1 * valor1 + valor2 * valor2);
	perimetro = hipotenusa + valor1 + valor2;
	superficie = (valor1 * valor2) / 2;
	printf("La hipotenusa de su triangulo es: %lf \n ", hipotenusa);
	printf("El perimetro de su triangulo es: %lf \n ", perimetro);
	printf("La superficie de su triangulo es: %lf \n ", superficie);
}