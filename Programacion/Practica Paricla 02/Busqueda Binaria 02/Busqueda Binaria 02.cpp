#include <stdio.h>

main()
{
	int array[8] = { 5, 11, 18, 24, 30,37,42,50 };
	int inicio = 0, fin = 7, medio;
	int buscado = 37;

	while (inicio <= fin)
	{
		medio = (inicio + fin) / 2;

		if (buscado == array[medio])
		{
			printf("El numero buscado es el medio, %d, su posicion es la %d.", buscado, medio);
			break;
		}
		else if (buscado > array[medio])
		{
			inicio = medio + 1;
		}
		else
		{
			fin = medio - 1;
		}
	}
}