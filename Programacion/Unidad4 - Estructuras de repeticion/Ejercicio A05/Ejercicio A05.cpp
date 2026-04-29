#include <stdio.h>

int main()
{
	int calificacion = 0;
	int suma = 0;
	int promedio = 0;

	for (int i = 1; i <= 5; i++)
	{
		printf("Ingrese la calificacion numero %d: \n", i);
		scanf_s("%d", &calificacion);
		suma += calificacion;
	}
	
	promedio = suma / 5;
	printf("Su promedio es de: %d", promedio);
}