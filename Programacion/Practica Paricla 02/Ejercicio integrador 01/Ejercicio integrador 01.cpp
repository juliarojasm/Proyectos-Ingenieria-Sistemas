#include <stdio.h>

const int cantLibros = 8;

void bubblesort(int libros[cantLibros])
{
	int aux = 0;

	for (int i = 0; i < 8-1; i++)
	{
		for (int j = 0; j < 8 - 1 - i; j++)
		{
			if (libros[j] > libros[j + 1])
			{
				aux = libros[j + 1];
				libros[j + 1] = libros[j];
				libros[j] = aux;
			}
		}
	}
}

int binarySearch(int libros[], int busqueda)
{
	int inicio = 0, fin = 7, medio;

	while (inicio <= fin)
	{
		medio = (inicio + fin) / 2;

		if (busqueda < libros[medio])
		{
			fin = medio - 1;
		}
		else if (busqueda > libros[medio])
		{
			inicio = medio + 1;
		}
		else if (busqueda == libros[medio])
		{
			return medio;
		}
		
	}

	return -1;
}

void procesoDatos(int libros[cantLibros], int *caro, int *barato, int *promedio)
{
	int suma = 0;
	for (int i = 0; i < cantLibros; i++)
	{
		suma += libros[i];
	}

	*caro = libros[7];
	*barato = libros[0];
	*promedio = suma / cantLibros;
}

void salidaDatos(int libros[], int caro, int barato, int promedio, int solucion)
{
	printf("El arreglo ordenado es: \n");
	for (int i = 0; i < cantLibros; i++)
	{
		printf("%d\n", libros[i]);
	}
	printf("El mas caro es: %d\n", caro);
	printf("El mas barato es: %d\n", barato);
	printf("El promedio es: %d\n", promedio);

	if (solucion == -1)
	{
		printf("El numero no se ha encontrado en el array.\n");
	}
	else
	{
		printf("El numero se encuentra en la posicion: %d \n", solucion);
	}
}


int main()
{
	int libros[cantLibros] = { 4500, 1200, 8900, 3300, 6700, 2100, 9800, 5400 };
	int caro, barato, promedio;
	int busqueda = 0, solucion;

	bubblesort(libros);
	procesoDatos(libros, &caro, &barato, &promedio);

	printf("Ingrese un numero a buscar: \n");
	scanf_s("%d", &busqueda);

	solucion = binarySearch(libros, busqueda);

	salidaDatos(libros, caro, barato, promedio, solucion);

	return 0;
}