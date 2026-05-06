#include <stdio.h>

int main()
{

	float saldo = 1000, dinero = 0;
	
	
	while (saldo > 0)
	{
		printf("Ingrese el dinero a retirar: \n");
		scanf_s("%f", &dinero);

		if (dinero >= 0)
		{
			saldo -= dinero;
			printf("Su saldo es de: \n%f", saldo);
		}
		else
		{
			printf("Ingrese un monto valido.");
		}
	}
	

}