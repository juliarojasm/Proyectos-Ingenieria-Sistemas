
#include <stdio.h>

int main()
{
	int valor = 0;
	int cant_valores = 0, cant_par = 0, cant_impar = 0;
	int promedio_gen = 0, promedio_par = 0, promedio_impar = 0;
	int mayor_15 = 0;

	while (cant_valores < 8)
	{
		printf("Ingrese el valor %d:\n", cant_valores);
		scanf_s("%d", &valor);
		cant_valores += 1;
		promedio_gen += valor;
		if (valor % 2 == 0)
		{
			cant_par += 1;
			promedio_par += valor;
		}
		else
		{
			if (valor % 2 == 1)
			{
				cant_impar += 1;
				promedio_impar += valor;
			}
		}
		if (valor > 15)
			mayor_15 += 1;
	}
	
	//promedio general
	promedio_gen = promedio_gen / cant_valores;
	printf("Su promedio general es: %d.\n", promedio_gen);

	//comprobacion de pares y promedio
	if (cant_par > 0)
	{
		promedio_par = promedio_par / cant_par;
		printf("Su promedio par es: %d.\n", promedio_par);
	}
	else
	{
		printf("No se han ingresado numeros pares.\n");
	}

	//comprobacion de impares y promedio
	if (cant_impar > 0)
	{
		promedio_impar = promedio_impar / cant_impar;
		printf("Su promedio impar es: %d.\n", promedio_impar);
	}
	else
	{
		printf("No se han ingresado numeros impares.\n");
	}

	//valores mayores a 15
	printf("La cantidad de numeros mayores a 15 es: %d.\n", mayor_15);

}