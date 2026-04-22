#include <stdio.h>

int main()
{
	int codigo_error;

	printf("Elija el tipo de protocolo: \n");
	scanf_s("%d", &codigo_error);

	switch (codigo_error)
	{
		case 1:
		{
			printf("TCP");
		}
		case 2:
		{
			printf("UDP");
		}
		case 3:
		{
			printf("HTTP");
		}
	}

}