#include <stdio.h>

int main()
{
	int ip_formato_correcto;

	printf("Ingrese la IP: \n");
	if (scanf_s("%d", &ip_formato_correcto)==1); //verificacion de ingreso de un valor entero

	if (ip_formato_correcto == 1)
	{
		printf("IP valida.");
	}
	else
	{
		printf("Error en formato de IP.");
	}
}