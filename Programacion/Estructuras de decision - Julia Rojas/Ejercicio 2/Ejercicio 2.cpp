#include <stdio.h>

int main()
{
	int conexion_activa;

	printf("Ingrese si su conexion esta activa:\n");
	scanf_s("%d", &conexion_activa);

	if (conexion_activa == 0)
	{
		printf("Error: Sin conexion a Internet.");
	}
}