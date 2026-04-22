
#include <stdio.h>

int main()
{
	int suma = 0, valor = 0, promedio = 0, cant_valores = 0;
	
	while (cant_valores < 25)
	{
		printf("Ingrese un valor:\n");
		scanf_s("%d", &valor);
		cant_valores += 1;
		suma = suma + valor;
	}
	promedio = suma / 25;
	printf("Su promedio es: %d.\n",promedio);
}
