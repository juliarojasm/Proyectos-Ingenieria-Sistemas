#include <stdio.h>

int main()
{
	int codigo_error;

	printf("Elija el sensor: \n");
	scanf_s("%d", &codigo_error);

	switch (codigo_error)
	{
		case 1:
		{
			printf("Ultrasonido");
		}
		case 2:
		{
			printf("Infrarrojo");
		}
		case 3:
		{
			printf("Humedad");
		}
	}

}