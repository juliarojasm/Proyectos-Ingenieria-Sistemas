#include <stdio.h>

int main()
{
	int factura, importe = 0, suma = 0, may1000 = 0, men1000 = 0, entre400y700 = 0;

	printf("Ingrese el numero de factura:\n");
	scanf_s("%d", &factura);


	while (factura != 0)
	{
		printf("Ingrese el importe de la factura: \n");
		scanf_s("%d", &importe);

		suma += importe;

		if (importe >= 1000)
		{
			may1000++;
		}
		else
		{
			men1000++;
			
			if (importe >= 400 && importe <= 700)
			{
				entre400y700++;
			}
		}
		
		printf("Ingrese el numero de factura:\n");
		scanf_s("%d", &factura);
	}


	printf("La suma de los importes de sus facturas es de: \n%d", suma);
	printf("Los importes que superan al 1000 son: \n%d", may1000);
	printf("Los importes que son menores al 1000 son: \n%d", men1000);
	printf("Los importes que estan entre 400 y 700 son: \n%d", entre400y700);
}