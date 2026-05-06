#include <stdio.h>

int main()
{
	int temperatura = 0;
	int mayor = 0, menor = 0;

	printf("Ingrese una temperatura:\n");
	scanf_s("%d", &temperatura);

	mayor = temperatura;
	menor = temperatura;

	while (temperatura != 1000)
	{
		if (temperatura > mayor)
		{
			mayor = temperatura;
		}

		if (temperatura < menor)
		{
			menor = temperatura;
		}

		printf("Ingrese una temperatura:\n");
		scanf_s("%d", &temperatura);
	}

	printf("La mayor temperatura es:\n%d", mayor);

	printf("La menor temperatura es:\n%d", menor);

}