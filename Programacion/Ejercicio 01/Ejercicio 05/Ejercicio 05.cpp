#include <stdio.h>

int main()
{

	int temperatura = 0;
	int mayor = 0, menor = 0;

	printf("Ingrese una temperatura: \n");
	scanf_s("%d", &temperatura);

	while (temperatura != 1000)
	{

		mayor = temperatura;
		menor = temperatura;

		printf("Ingrese una temperatura: \n");
		scanf_s("%d", &temperatura);

		if (temperatura > mayor)
		{
			mayor = temperatura;
		}
		
		if (temperatura < menor)
		{
			menor = temperatura;
		}

	}
}