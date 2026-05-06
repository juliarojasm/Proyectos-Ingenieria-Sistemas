#include <stdio.h>

int main()
{
	int num = 0, total = 0;

	printf("Ingrese un numero positivo: \n");
	scanf_s("%d", &num);

	while (num >= 0)
	{
		total++;
		printf("Ingrese un numero positivo: \n");
		scanf_s("%d", &num);
		
	}

	printf("La total de sus numeros ingresados es de: \n%d", total);

}