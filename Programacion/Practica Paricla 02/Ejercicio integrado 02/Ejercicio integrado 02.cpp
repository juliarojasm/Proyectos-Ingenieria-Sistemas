#include <stdio.h>

const int cantDias = 15;
/*Una tienda registró el monto de las ventas 
realizadas durante 15 días consecutivos.
Se pide:
Cargar el arreglo.
Calcular el promedio de ventas.
Informar la venta más alta y la más baja.
Ordenar las ventas de mayor a menor mediante burbuja.
Buscar un monto ingresado por el usuario utilizando 
búsqueda secuencial.*/

int  entradaDatos(int ventas[cantDias])
{
	for (int i = 0; i < cantDias; i++)
	{
		printf("Ingrese el monto de la venta realizada: \n");
		scanf_s("%d", &ventas[i]);
	}

	int numero;
	printf("Ingrese un numero a buscar en el array: \n");
	scanf_s("%d", &numero);

	return numero;
}

void burbuja(int ventas[cantDias])
{
	int aux = 0;
	for (int i = 0; i < cantDias - 1; i++)
	{
		for (int j = 0; j < cantDias - 1 - i; j++)
		{
			if (ventas[j] < ventas[j + 1])
			{
				aux = ventas[j];
				ventas[j] = ventas[j+1];
				ventas[j+1] = aux;
			}
		}
	}
}

int secuencial(int ventas[cantDias], int numero)
{
	for (int i = 0; i < cantDias;i++)
	{
		if (ventas[i] == numero)
		{
			return i;
		}
	}

	return -1;
}

int procesoDatos(int ventas[cantDias], int *mayor, int *menor)
{
	*mayor = ventas[0];
	*menor = ventas[cantDias-1];
	int suma = 0;
	for (int i = 0; i < cantDias;i++)
	{
		suma += ventas[i];
	}

	int promedio = suma / cantDias;
	return promedio;
}

void salidaDatos(int mayor, int menor, int promedio, int index)
{
	printf("\nEl mayor numero es: %d\n", mayor);
	printf("\nEl menor numero es: %d\n", menor);
	printf("\nEl promedio es: %d\n", promedio);

	if (index != -1)
	{
		printf("\nEl numero buscado se encuentra en la posicion: %d\n", index);
	}
	else
	{
		printf("\nEl numero no ha sido encontrado.");
	}

}

int main()
{
	int ventas[cantDias];
	int mayor, menor, promedio, numero, index;

	numero = entradaDatos(ventas);
	burbuja(ventas);
	index = secuencial(ventas, numero);
	promedio = procesoDatos(ventas, &mayor, &menor);
	salidaDatos(mayor, menor, promedio, index);

	return 0;
}