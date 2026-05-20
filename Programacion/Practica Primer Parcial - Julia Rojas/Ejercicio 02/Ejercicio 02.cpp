#include <stdio.h>

int main()
{

	int N = 0, i = 0, codigoHTTP = 0, categoria = 0, cant1xx = 0, cant2xx = 0, cant3xx = 0, cant4xx = 0, cant5xx = 0, cantLentas = 0, cantCriticas = 0;

	float tiempo = 0, tiempoMax = 0, tiempoMin = 30000, sumaTiempo = 0, promedioTiempo = 0;

	printf("Ingrese la cantidad de peticiones a procesar: \n");
	scanf_s("%d", &N);

	if (N > 0 && N <= 1000)
	{
		while (N > i)
		{
			i++;

			printf("Ingrese el codigo HTTP: \n");
			scanf_s("%d", &codigoHTTP);

			if (codigoHTTP >= 100 && codigoHTTP <= 599)
			{
				printf("Ingrese el tiempo de respuesta en milisegundos: \n");
				scanf_s("%f", &tiempo);

				if (tiempo >= 0 && tiempo <= 30000)
				{
					sumaTiempo += tiempo;

					if (tiempo > tiempoMax)
					{
						tiempoMax = tiempo;
					}
					else if (tiempo < tiempoMin)
					{
						tiempoMin = tiempo;
					}


					if (codigoHTTP <= 199)
					{
						cant1xx++;
					}
					else if(codigoHTTP <= 299)
					{
						cant2xx++;
					}
					else if (codigoHTTP <= 399)
					{
						cant3xx++;
					}
					else if (codigoHTTP <= 499)
					{
						cant4xx++;
					}
					else
					{
						cant5xx++;

						if (tiempo >= 2000)
						{
							cantLentas++;
							cantCriticas++;
						}
					}

					if (tiempo > 2000)
					{
						cantLentas++;
					}

				}
				else
				{
					printf("El tiempo de respuesta ingresado no es valido.\n");
				}
			}
			else
			{
				printf("El codigo HTTP ingresado no es valido.\n");
			}
		}
	}
	else
	{
		printf("El numero ingresado no es valido.\n");
	}
	
	if (N > 0)
	{
		promedioTiempo = sumaTiempo / N;
	}

	printf("La cantidad de peticiones de la categoria 1 (Informativa) es de: \n%d\n", cant1xx);
	printf("La cantidad de peticiones de la categoria 2 (Exito) es de: \n%d\n", cant2xx);
	printf("La cantidad de peticiones de la categoria 3 (Redireccion) es de: \n%d\n", cant3xx);
	printf("La cantidad de peticiones de la categoria 4 (Error de cliente) es de: \n%d\n", cant4xx);
	printf("La cantidad de peticiones de la categoria 5 (Erorr de servidor) es de: \n%d\n", cant5xx);

	printf("La cantidad total de respuestas lentas es de: \n%d\n", cantLentas);
	printf("La cantidad total de respuestas criticas es de: \n%d\n", cantCriticas);

	printf("El tiempo de respuesta en promedio general es de: \n%f\n", promedioTiempo);
	printf("El tiempo de respuesta maximo es de: \n%f\n", tiempoMax);
	printf("El tiempo de respuesta minimo es de: \n%f\n", tiempoMin);

}