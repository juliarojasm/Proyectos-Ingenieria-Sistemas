#include <stdio.h>

int main()
{
	int dispositivo_conectado = 0, driver_actualizado = 0;

	printf("Ingrese si el dispositivo esta conectado: \n");
	scanf_s("%d", &dispositivo_conectado);
	

	if (dispositivo_conectado == 1)
	{
		printf("Ingrese si el driver esta actualizado:\n");
		scanf_s("%d", &driver_actualizado);
		if (driver_actualizado == 0)
		{
			printf("Deberia actualizar el driver.\n");
		}
		else
		{
			printf("El driver esta actualizado.\n");
		}
	}
	else
	{
		printf("Debe conectar el dispositivo.\n");
	}

}