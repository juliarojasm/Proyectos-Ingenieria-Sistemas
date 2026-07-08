#include <stdio.h>

const int cantAlumnos = 20;

int entradaDatos(int calificaciones[cantAlumnos])
{
	for (int i = 0; i < cantAlumnos; i++)
	{
		printf("Ingrese la nota del alumno %d: \n", i+1);
		scanf_s("%d", &calificaciones[i]);
	}
	int notaBuscar;
	printf("Ingrese un numero a buscar: \n");
	scanf_s("%d", &notaBuscar);

	return notaBuscar;
}

void burbuja(int calificaciones[cantAlumnos])
{
	int aux = 0;

	for (int i = 0; i < cantAlumnos - 1; i++)
	{
		for (int j = 0; j < cantAlumnos - 1 - i; j++)
		{
			if (calificaciones[j] > calificaciones[j + 1])
			{
				aux = calificaciones[j + 1];
				calificaciones[j + 1] = calificaciones[j];
				calificaciones[j] = aux;
			}
		}
	}
}

int busqueda(int calificaciones[cantAlumnos], int notaBuscar)
{
	int inicio = 0, fin = cantAlumnos - 1;
	int medio;

	while (inicio <= fin)
	{
		medio = (inicio + fin) / 2;
		if (calificaciones[medio] == notaBuscar)
		{
			return medio;
		}
		else if (notaBuscar < calificaciones[medio])
		{
			fin = medio - 1;
		}
		else
		{
			inicio = medio + 1;
		}
	}

	return -1;
}

void procesoDatos(int calificaciones[cantAlumnos], int *mayor, int *menor)
{
	*mayor = calificaciones[cantAlumnos - 1];
	*menor = calificaciones[0];
}

void salidaDatos(int calificaciones[cantAlumnos], int mayor, int menor, int posicion)
{
	printf("El array ordenado de menor a mayor es: \n");
	for (int i = 0; i < cantAlumnos; i++)
	{
		printf("%d: %d\n", i, calificaciones[i]);
	}

	printf("El mayor numero es: %d\n", mayor);
	printf("El menor numero es: %d\n", menor);

	if (posicion != -1)
	{
		printf("El numero se encuentra en la posicion: %d\n", posicion);
	}
	else
	{
		printf("El numero a buscar no se ha encontrado en el array.");
	}
}

int main()
{
	int calificaciones[cantAlumnos], notaBuscar, posicion;
	int mayor, menor;
	notaBuscar = entradaDatos(calificaciones);
	burbuja(calificaciones);
	posicion = busqueda(calificaciones, notaBuscar);
	procesoDatos(calificaciones, &mayor, &menor);
	salidaDatos(calificaciones, mayor, menor, posicion);

	return 0;
}
