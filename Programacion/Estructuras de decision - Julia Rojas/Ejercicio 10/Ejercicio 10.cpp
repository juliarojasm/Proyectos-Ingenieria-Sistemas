#include <stdio.h>

int main()
{
	int codigo_error;

	printf("Ingrese el codigo de error: \n");
	scanf_s("%d", &codigo_error);

	switch (codigo_error)
	{
		case 100:
		{
			printf("INFO");
		}
		case 200:
		{
			printf("WARNING");
		}
		case 300:
		{
			printf("CRITICAL");
		}
	}

}