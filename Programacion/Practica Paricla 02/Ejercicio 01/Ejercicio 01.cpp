#include <stdio.h>

const int cantHoras = 6;
/*Ejercicio 1 — Registro de temperaturas de una estación meteorológica

Enunciado: Una estación meteorológica registra la temperatura (en grados centígrados) 
tomada cada hora durante 6 horas de la mañana. 
Se necesita un programa que cargue esas 6 temperaturas en un arreglo, 
calcule la temperatura total acumulada y el promedio de esas 6 horas, 
y muestre ambos resultados junto con el detalle de las temperaturas cargadas.*/

void entradaDatos(int temperatura[], int cantHoras)
{
	for (int i=0; i < cantHoras; i++)
	{
		printf("Ingrese la temperatura de la hora %d: ", i + 1);
		scanf_s("%d", &temperatura[i]);
	}
}

int procesoDatos(int temperatura[], int cantHoras)
{
	int suma = 0;
	for (int i = 0; i < cantHoras; i++)
	{
		suma = suma + temperatura[i];
	}

	return suma;
}

void salidaDatos(int temperatura[], int cantHoras, int suma)
{
	printf("\nDetalle de temperaturas cargadas:\n");
	for (int i = 0; i < cantHoras; i++)
	{
		printf("Hora %d: %d grados centígrados\n", i + 1, temperatura[i]);
	}
	int promedio = suma / cantHoras;
	printf("\nTemperatura total acumulada: %d grados centígrados\n", suma);
	printf("Promedio de temperatura: %d grados centígrados\n", promedio);
}

int main()
{
	int temperatura[cantHoras];
	entradaDatos(temperatura, cantHoras);
	int suma = procesoDatos(temperatura, cantHoras); //es lo que devuelve
	salidaDatos(temperatura, cantHoras, suma);

	return 0;
}