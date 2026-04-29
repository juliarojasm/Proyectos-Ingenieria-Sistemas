#include <stdio.h>

int main()
{
	int par = 0;
	int impar = 0;

	for (int i = 1; i <= 50; i++)
	{
		if (i % 2 == 0)
		{
			par++;
		}
		else
		{
			impar++;
		}
	}
	printf("La cantidad de numeros pares es: %d\n", par);
	printf("La cantidad de numeros impares es: %d\n", impar);
}