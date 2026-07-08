#include <stdio.h>

int main()
{
	int array[7] = { 45, 12, 78, 23, 56, 34, 89 };

	int aux = 0;

	for (int i = 0; i < 7 - 1; i++)
	{
		for (int j = 0; j < 7 - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
			}
		}
	}

	int numero = 56;
	int inicio = 0, fin = 6, medio;

	while (inicio <= fin)
	{
		medio = (inicio + fin) / 2;
		if (numero == array[medio])
		{
			printf("EL numero buscado era el % d, y se encuentra en la posicion %d.", numero, medio);
			break;
		}
		else if (numero > array[medio])
		{
			inicio = medio + 1;
		}
		else
		{
			fin = medio - 1;
		}
	}

}