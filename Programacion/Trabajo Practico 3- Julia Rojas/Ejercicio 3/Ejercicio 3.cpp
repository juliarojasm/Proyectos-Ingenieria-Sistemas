
#include <stdio.h>

int main()
{
	int valor = 0;
	int cant_par = 0, cant_impar = 0;
	int promedio_gen = 0, promedio_par = 0, promedio_impar = 0;
	int mayor_15 = 0;

	for(int i = 1; i <= 8; i++)
	{
		printf("Ingrese el valor %d:\n", i);
		scanf_s("%d", &valor);
		promedio_gen += valor;
		if (valor % 2 == 0)
		{
			cant_par += 1;
			promedio_par += valor;
		}
		else
		{
			cant_impar += 1;
			promedio_impar += valor;
		}
		if (valor > 15)
		{
			mayor_15 += 1;
		}
	}

	promedio_gen = promedio_gen / 8;
	printf("Su promedio general es: %d.\n", promedio_gen);

	if (cant_par > 0)
	{
		promedio_par = promedio_par / cant_par;
		printf("Su promedio par es: %d.\n", promedio_par);
	}
	else
	{
		printf("No se han ingresado numeros pares.\n");
	}

	
	if (cant_impar > 0)
	{
		promedio_impar = promedio_impar / cant_impar;
		printf("Su promedio impar es: %d.\n", promedio_impar);
	}
	else
	{
		printf("No se han ingresado numeros impares.\n");
	}

	
	printf("La cantidad de numeros mayores a 15 es: %d.\n", mayor_15);

}