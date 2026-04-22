#include <stdio.h>
#include <stdlib.h>

int main()
{
	int lado1, lado2, lado3;

	printf("Ejercicio 5 - Triangulo\n");

	printf("Ingrese su primer lado:\n");
	scanf_s("%d", &lado1);
	printf("Ingrese su segundo valor:\n");
	scanf_s("%d", &lado2);
	printf("Ingrese su tercer valor:\n");
	scanf_s("%d", &lado3);


	if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0)
	{
		printf("Sus lados deben ser positivos\n");
	}
	else
	{
		if (lado1 + lado2 <= lado3 || lado1 + lado3 <= lado2 || lado2 + lado3 <= lado1)
		{
		printf("Sus lados no forman un triangulo valido.\n");
		}
		else
		{
			if (lado1 == lado2 && lado2 == lado3)
			{
				printf("Su trianguilo es equilatero\n");
			}
			else
			{
				if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
				{
					printf("Su triangulo es isosceles\n");
				}
				else
				{
					printf("Su triangulo es escaleno\n");
				}
			}
		}
	}

	system("pause");

}