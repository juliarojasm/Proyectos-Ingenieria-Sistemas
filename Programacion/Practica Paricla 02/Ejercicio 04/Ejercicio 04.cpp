#include <stdio.h>

/*Escribí una función que reciba una 
temperatura en grados Celsius y devuelva, 
por punteros, esa misma temperatura 
convertida a Fahrenheit y a Kelvin.
Fórmulas: Fahrenheit = (Celsius × 9/5) + 32. 
Kelvin = Celsius + 273.15*/

float entradaDatos()
{
	float temperaturaC = 0;
	printf("Ingrese una temperatura en Celsius: \n");
	scanf("%f", &temperaturaC);

	return temperaturaC;
}

void procesoDatos(float temperaturaC, float *tempF, float *tempK)
{
	*tempF = (temperaturaC * 9 / 5) + 32;
	*tempK = temperaturaC + 273.15;
}

void salidaDatos(float temperaturaC, float tempF, float tempK)
{
	printf("La temperatura en celsius es: %f\n", temperaturaC);
	printf("La temperatura en Farenheit es: %f\n", tempF);
	printf("La temperatura en Kevin es: %f\n", tempK);
}

mint ain()
{
	float tempF, tempK;
	float temperaturaC = entradaDatos();
	procesoDatos(temperaturaC, &tempF, &tempK);
	salidaDatos(temperaturaC, tempF, tempK);

	return 0;
}