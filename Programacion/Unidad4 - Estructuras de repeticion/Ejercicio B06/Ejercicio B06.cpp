#include <stdio.h>

int main()
{

	float num = 0;
	int may10 = 0;

	printf("Ingrese un numero real: \n");
	scanf_s("%f", &num);

	while (num != 0)
	{
		if (num > 10)
		{
			may10++;
		}

		printf("Ingrese un numero real: \n");
		scanf_s("%f", &num);

	}


	printf("La cantidad de numeros mayores a 10 es de: \n%d", may10);

}