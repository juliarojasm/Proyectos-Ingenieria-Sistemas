#include <stdio.h>

int main()
{
	int huella_correcta;

	printf("Ingrese su huella: \n");
	scanf_s("%d", &huella_correcta);

	if (huella_correcta == 1)
	{
		printf("Acceso concedido");
	}
	else
	{
		printf("Acceso denegado");
	}
}