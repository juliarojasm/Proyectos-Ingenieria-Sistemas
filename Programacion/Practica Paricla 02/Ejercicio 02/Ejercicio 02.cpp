#include <stdio.h>

/*Enunciado: Una empresa con 8 empleados quiere 
analizar su nómina. Se debe cargar un arreglo con 
los sueldos de cada empleado y, mediante una función
de proceso que devuelva ambos resultados por punteros,
determinar cuál es el mayor sueldo y cuál es el menor
sueldo pagado en la empresa. El programa debe mostrar
el listado completo de sueldos junto con esos dos 
valores.*/

const int empleados = 8;

void entradaDatos(int sueldos[empleados])
{
	for (int i = 0; i < empleados; i++)
	{
		printf("Ingrese el sueldo numero %d:", i+1);
		scanf_s("%d", &sueldos[i]);
	}
}

void procesoDatos(int sueldos[empleados], int *mayor, int *menor)//con punteros
{
	*mayor = sueldos[0];
	*menor = sueldos[0];
	for (int i = 1; i < empleados; i++)//ya use el sueldo 0, va i=1 para seguir con el otro
	{
		if (sueldos[i] > *mayor)
		{
			*mayor = sueldos[i];
		}
		else if (sueldos[i] < *menor)
		{
			*menor = sueldos[i];
		}
	}
}

void salidaDatos(int sueldos[empleados], int mayor, int menor)
{
	printf("Listado de sueldos:\n");
	for (int i = 0; i < empleados; i++)
	{
		printf("Sueldo del empleado %d: %d\n", i + 1, sueldos[i]);
	}
	printf("El mayor sueldo es: %d\n", mayor);
	printf("El menor sueldo es: %d\n", menor);
}
int main()
{
	int sueldos[empleados];
	int mayor, menor;
	entradaDatos(sueldos);
	procesoDatos(sueldos, &mayor, &menor);
	salidaDatos(sueldos, mayor, menor);
	return 0;
}