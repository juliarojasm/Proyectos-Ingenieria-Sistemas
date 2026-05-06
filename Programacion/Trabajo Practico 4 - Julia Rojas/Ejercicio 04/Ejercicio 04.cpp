#include <stdio.h>

int main()
{
	int num_factura = 0, num_articulo = 0, cant_vendida = 0, precio_unitario = 0;
	int i = 0, n = 0;

	printf("Ingrese el numero de factura: \n");
	scanf_s("%d", &num_factura);

	while (num_factura != 0)
	{
		printf("Ingrese el numero de articulo: \n");
		scanf_s("%d", &num_articulo);

		if (num_articulo <= 3)
		{

		}

		printf("Ingrese la cantidad vendida: \n");
		scanf_s("%d", &cant_vendida);
		printf("Ingrese el precio unitario: \n");
		scanf_s("%d", &precio_unitario);
	}

}