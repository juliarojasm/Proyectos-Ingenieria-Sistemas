#include <stdio.h>

int main()
{
	int temperatura = 0;

	printf("Ingrese la temperatura del dispositivo conectado: \n");
	scanf_s("%d", &temperatura);


	if (temperatura > 100)
	{
		printf("Alarma activada.\n");
	}
	else
	{
		if ((temperatura >= 80) && (temperatura <= 100))
		{
			printf("Ventilacion aumentada.\n");
		}
		else
		{
			printf("Ningun cambio se realizo.\n");
		}
	}

}