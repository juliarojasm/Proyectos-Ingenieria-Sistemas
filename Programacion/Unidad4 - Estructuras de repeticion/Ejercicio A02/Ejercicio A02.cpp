#include <stdio.h>

int main()
{
	int num = 0;
	int suma = 0;

	printf("Ingrese un numero entero: \n");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		suma = suma + i;
	}

	printf("La suma es: %d\n", suma);

}