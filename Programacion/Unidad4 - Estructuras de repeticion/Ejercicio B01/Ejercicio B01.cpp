#include <stdio.h>

int main()
{
	int num = 0;
	int suma = 0;

	printf("Ingrese un valor:\n");
	scanf_s("%d", &num);

	while (num != 0)
	{
		suma += num;
		printf("Ingrese un valor:\n");
		scanf_s("%d", &num);
	}

	printf("La suma de sus numeros es de: %d", suma);

}