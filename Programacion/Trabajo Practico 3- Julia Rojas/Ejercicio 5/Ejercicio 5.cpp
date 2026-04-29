#include <stdio.h>

main()
{
	char patente[10];
	int monto_multa = 0, suma_may40 = 0, porc40 = 0, cant40 = 0, total = 0;

	for (int i = 0; i < 10; i++)
	{
		printf("Ingrese patente del auto: \n");
		scanf_s("%s", &patente);
		printf("Ingrese monto de la multa: \n");
		scanf_s("%d", &monto_multa);

		total += monto_multa;

		if (monto_multa >= 40)
		{
			cant40++;
			suma_may40 += monto_multa;
		}
	}
	if (total > 0)
	{
		porc40 = (suma_may40 * 100) / total;
	}
	
	printf("La cantidad de multas que superaron los $40 son:\n%d", cant40);
	printf("El porcentaje de las multas es de:\n %d%%", porc40);
}