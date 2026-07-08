#include <stdio.h>

/*Enunciado: Un club deportivo tiene cargados los 
números de socio de sus 10 asociados en un arreglo. 
Cuando alguien se presenta en la entrada, 
el personal ingresa el número de socio y el sistema 
debe indicar, mediante búsqueda secuencial, 
si esa persona es socia del club y, en caso 
afirmativo, en qué posición del registro se 
encuentra.*/

const int cantSocios = 10;

void entradaDatos(int socios[cantSocios], int *numSocio)
{
	for (int i = 0; i < cantSocios; i++)
	{
		printf("Ingrese el numero del socio %d: \n", i);
		scanf_s("%d", &socios[i]);
	}

	printf("Ingrese el numero de socio: \n");
	scanf_s("%d", numSocio);
}

int procesoDatos(int socios[cantSocios], int numSocio)
{
	for (int i = 0; i < cantSocios; i++)
	{
		if (numSocio == socios[i])
		{
			return i;
		}
	}
	return -1; //se usa -1 pq no es una posicion viable dentro del array.
}


main()
{
	int socios[cantSocios];
	int numSocio = 0;

	entradaDatos(socios, &numSocio);
	int posicion = procesoDatos(socios, numSocio);

	if (posicion == -1)
	{
		printf("El numero de socio no coincide con los ingresados");
	}
	else
	{
		printf("El socio se encuentra en la posicion: %d", posicion);
	}
}