#include <stdio.h>

int main()
{
	int nivel_bateria;

	printf("Ingrese su nivel de bateria: \n");
	scanf_s("%d", &nivel_bateria);

	if (nivel_bateria == 1)
	{
		printf("Modo ahorro activado");
	}
	else
	{
		printf("Carga normal");
	}
}