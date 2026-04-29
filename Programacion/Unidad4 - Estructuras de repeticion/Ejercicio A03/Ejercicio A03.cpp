#include <stdio.h>

int main()
{
	int numX = 0;
	int mult = 0;

	printf("Ingrese un numero entero: \n");
	scanf_s("%d", &numX);

	for (int i = 0; i <= 10; i++)
	{
		mult = numX * i;
		printf("%d * %d = %d\n", numX, i, mult);
	}
}