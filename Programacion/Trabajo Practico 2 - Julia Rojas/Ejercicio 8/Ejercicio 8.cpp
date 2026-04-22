#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dia, mes, anio, cantdias, febrero, invalido;

	printf("Ejercicio 8 - Calendario\n");

	printf("Ingrese el numero del dia:\n");
	scanf_s("%d", &dia);
	printf("Ingrese el numero del mes:\n");
	scanf_s("%d", &mes);
	printf("Ingrese el a%co:\n", 164);
	scanf_s("%d", &anio);

	febrero = 0;
	invalido = 0;

	//definicion de año bisiesto
	if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
	{
		febrero = 29;
	}
	else
	{
		febrero = 28;
	}

	//definicion dias por mes y validacion
	switch (mes)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (dia > 31 || dia < 1)
		{
			invalido = 1;
			printf("El dia no es valido\n");
		}
		break;
	case 4: case 6: case 9: case 11:
		if (dia > 30 || dia < 1)
		{
			invalido = 1;
			printf("El dia no es valido\n");
		}
		break;
	case 2:
		if (dia > febrero || dia < 1)
		{
			invalido = 1;
			printf("El dia no es valido\n");
		}
		break;
	}

	//validacion de valores
	if (mes < 1 || mes > 12)
	{
		printf("El mes no es valido\n");
		invalido = 1;
	}
	if (anio <= 0)
	{
		printf("El a%co no es valido\n", 164);
		invalido = 1;
	}

	//final
	if (invalido == 0)
	{
		printf("La fecha %d/%d/%d es valida\n", dia, mes, anio);
		if (febrero == 29)
		{
			printf("El a%co es bisiesto\n", 164);
		}
		else
		{
			printf("El a%co no es bisiesto\n", 164);
		}
	}

	system("pause");

}