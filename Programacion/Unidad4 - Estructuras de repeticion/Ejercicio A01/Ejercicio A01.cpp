#include <stdio.h>

int main()
{
	int n;

	printf("Ingrese un numero entero positivo: \n");
	scanf_s("%d", &n);

	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d\n", i);
		}
	}
	else
	{
		printf("El numero que ha ingresado no es valido.");
	}
}