#include <stdio.h>

int main()
{
	int temp=0;
	

	printf("Ingrese la temperatura del CPU\n");
	scanf_s("%d", &temp);

	if (temp >= 85)
	{
		printf("Ventilador ON");
	}
}