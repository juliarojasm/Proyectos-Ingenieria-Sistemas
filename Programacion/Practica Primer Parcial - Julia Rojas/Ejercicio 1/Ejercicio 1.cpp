#include <stdio.h>

int main()
{
	int surtidor = 0, cantCargas = 0, cantN = 0, cantP = 0, cantD = 0;
	float litros = 0, importe = 0, precioLitro = 0, totalLitros = 0, totalFacturado = 0;
	char combustible, respuesta = 's', tipoMayor;

	while (respuesta == 'S' || respuesta == 's')
	{
		cantCargas++;

		printf("Ingrese el numero de surtidor: \n");
		scanf_s("%d", &surtidor);

		if (surtidor >= 1 && surtidor <= 12)
		{
			printf("Ingrese el tipo de combustible: \n");
			scanf_s("%c", &combustible, 1);

			if (combustible == 'N' || combustible == 'n' || combustible == 'P' || combustible == 'p' || combustible == 'D' || combustible == 'd')
			{
				if (combustible == 'N' || combustible == 'n')
				{
					precioLitro = 1180.50;
					cantN++;
					if (cantN > cantD && cantN > cantP)
					{
						tipoMayor = 'N';
					}

				}
				else if (combustible == 'P' || combustible == 'p')
				{
					precioLitro = 1395.75;
					cantP++;
					if (cantP > cantD && cantP > cantN)
					{
						tipoMayor = 'P';
					}

				}
				else
				{
					precioLitro = 1250.00;
					cantD++;

					if (cantD > cantN && cantD > cantP)
					{
						tipoMayor = 'D';
					}

				}

				printf("Ingrese la cantidad de litros: \n");
				scanf_s("%f", &litros);

				if (litros > 0 && litros <= 80)
				{
					totalLitros += litros;
					importe = precioLitro * litros;

					if (litros >= 50)
					{
						totalFacturado += importe - (importe * 3) / 100;
					}
					else
					{
						totalFacturado += importe;
					}

					printf("¿Desea regristar otra carga? \n");
					scanf_s("%c", &respuesta, 1);
				}
				else
				{
					printf("Los litros son invalidos.");
				}
			}
			else
			{
				printf("Combustible invalido.\n");
			}
		}
		else
		{
			printf("Numero de surtidor invalido\n");
		}
	}
	
	printf("La cantidad de cargas realizadas es de: \n%d", cantCargas);
	printf("La cantidad total de litros despachados es de: \n%f", totalLitros);
	printf("El importe total facturao es de: \n%f", totalFacturado);
	printf("La cantidad de cargas de cada tipo de combustible es de: \nN: %d\nP: %d\nD: %d\n", cantN, cantP, cantD);
	printf("El tipo de combustible mas ingresado es el: \n%c", tipoMayor);

} 