#include <stdio.h>

int main()
{
	int modo;

	printf("Ingrese el modo: \n");
	scanf_s("%d", &modo);

	switch(modo)
	{
		case 1:
		{
		printf("Limpieza");
		}
		case 2:
		{
			printf("Vigilancia");
		}
		case 3:
		{
			printf("Reposo");
		}
	}

}