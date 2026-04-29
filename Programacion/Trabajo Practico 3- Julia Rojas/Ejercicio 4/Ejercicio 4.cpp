#include <stdio.h>

int main()
{
	int num = 0;
	//variables numeros
	int cant_men10 = 0, cant_men20 = 0, cant_men30 = 0, cant_may30 = 0;
	//variables porcentajes
	int porc10 = 0, porc20 = 0, porc30 = 0, porcmay = 0;

	for (int i = 1; i <= 8; i++)
	{
		printf("Ingrese el valor numero %d\n", i);
		scanf_s("%d", &num);

		if ((num <= 10) && (num >= 0))
		{
			cant_men10++;
		}
		else if (num <= 20)
		{
			cant_men20++;
		}
		else if (num <= 30)
		{
			cant_men30++;
		}
		else if (num > 30)
		{
			cant_may30++;
		}
		else
		{
			printf("El numero que ha ingresado es incorrecto\n");
		}
	}

	//porcentajes
	porc10 = (cant_men10 * 100) / 8;
	porc20 = (cant_men20 * 100) / 8;
	porc30 = (cant_men30 * 100) / 8;
	porcmay = (cant_may30 * 100) / 8;

	printf("El porcentaje de los numeros menores a 10 es: %d%%\n", porc10);
	printf("El porcentaje de los numeros menores a 20 es: %d%%\n", porc20);
	printf("El porcentaje de los numeros menores a 30 es: %d%%\n", porc30);
	printf("El porcentaje de los numeros mayores a 30 es: %d%%\n", porcmay);

}