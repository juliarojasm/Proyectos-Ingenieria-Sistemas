
#include <stdio.h>

int main()
{
	int suma = 0, valor = 0, promedio = 0;
	
	for (int i = 0; i < 5; i++)
	{
		printf("Ingrese un valor:\n");
		scanf_s("%d", &valor);
		suma = suma + valor;
	}
	promedio = suma / 5;
	printf("Su promedio es: %d.\n",promedio);
}
