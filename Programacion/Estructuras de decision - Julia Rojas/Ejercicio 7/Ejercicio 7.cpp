#include <stdio.h>

int main()
{
	int servicio_activo;

	printf("Ingrese si el servicio esta activo: \n");
	scanf_s("%d", &servicio_activo);

	if (servicio_activo == 1)
	{
		printf("Servicio operativo.");
	}
	else
	{
		printf("Servicio en mantenimiento.");
	}
}