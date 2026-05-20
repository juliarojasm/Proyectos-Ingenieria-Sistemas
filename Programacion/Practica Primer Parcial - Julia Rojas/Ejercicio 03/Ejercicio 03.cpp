#include <stdio.h>

int main()
{

	int numReserva = 0, noches = 0, huespedes = 0, cantReservas = 0, totalNoches = 0, cantE = 0, cantS = 0, cantJ = 0, cantP = 0, reservaMayor = 0;
	float precio = 0, importe = 0, totalFacturado = 0, importeMayor = 0;
	char tipoHab;

	printf("Ingrese el numero de reserva: \n");
	scanf_s("%d", &numReserva);


	while (numReserva != 0)
	{

		if (numReserva > 0 && numReserva <= 99999)
		{
			printf("Ingrese la cantidad de noches: \n");
			scanf_s("%d", &noches);

			if (noches > 0 && noches <= 60)
			{

				printf("Ingrese la cantidad de huespedes: \n");
				scanf_s("%d", &huespedes);

				if (huespedes > 0 && huespedes <= 6)
				{
					printf("Ingrese el tipo de habitacion: \n");
					scanf_s(" %c", &tipoHab, 1);

					if (tipoHab == 'E' || tipoHab == 'e')
					{
						precio = 45000;
						cantE++;

						cantReservas++;

						totalNoches += noches;

						importe = precio * noches;

						if (huespedes > 2)
						{
							importe = importe + importe * 15 / 100;
						}

						if (noches >= 7)
						{
							importe = importe - importe * 10 / 100;
						}

						if (importe > importeMayor)
						{
							importeMayor = importe;
							reservaMayor = numReserva;
						}

						totalFacturado += importe;
					}
					else if (tipoHab == 'S' || tipoHab == 's')
					{
						precio = 68000;
						cantS++;

						cantReservas++;

						totalNoches += noches;

						importe = precio * noches;

						if (huespedes > 2)
						{
							importe = importe + importe * 15 / 100;
						}

						if (noches >= 7)
						{
							importe = importe - importe * 10 / 100;
						}

						if (importe > importeMayor)
						{
							importeMayor = importe;
							reservaMayor = numReserva;
						}

						totalFacturado += importe;
					}
					else if (tipoHab == 'J' || tipoHab == 'j')
					{
						precio = 95000;
						cantJ++;

						cantReservas++;

						totalNoches += noches;

						importe = precio * noches;

						if (huespedes > 2)
						{
							importe = importe + importe * 15 / 100;
						}

						if (noches >= 7)
						{
							importe = importe - importe * 10 / 100;
						}

						if (importe > importeMayor)
						{
							importeMayor = importe;
							reservaMayor = numReserva;
						}

						totalFacturado += importe;
					}
					else if (tipoHab == 'P' || tipoHab == 'p')
					{
						precio = 180000;
						cantP++;

						cantReservas++;

						totalNoches += noches;

						importe = precio * noches;

						if (huespedes > 2)
						{
							importe = importe + importe * 15 / 100;
						}

						if (noches >= 7)
						{
							importe = importe - importe * 10 / 100;
						}

						if (importe > importeMayor)
						{
							importeMayor = importe;
							reservaMayor = numReserva;
						}

						totalFacturado += importe;
					}
					else
					{
						printf("El tipo de habitacion ingresado no es correcto\n");
					}

				}
			}
		}

		printf("Ingrese el numero de reserva: \n");
		scanf_s("%d", &numReserva);

	}

	printf("La cantidad de reservas es de: \n%d\n", cantReservas);
	printf("La cantidad de noches reservadas es de: \n%d\n", totalNoches);
	printf("El importe total facturado es de: \n$%f\n", totalFacturado);

	printf("La cantidad de reservas por tipos de habitacion es de: \n");
	printf("Estandar: %d\n", cantE);
	printf("Superior: %d\n", cantS);
	printf("Suite junior: %d\n", cantJ);
	printf("Presidencial: %d\n", cantP);

	printf("La reserva con mayor importe es: %d\n", reservaMayor);
	printf("El mayor importe es: $%f\n", importeMayor);

}