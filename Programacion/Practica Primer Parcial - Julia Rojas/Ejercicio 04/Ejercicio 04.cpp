#include <stdio.h>

int main()
{
	int K = 0, cantVotantes = 0;
	int aFavor = 0, enContra = 0, blanco = 0, nulo = 0;
	int totalVotantes = 0;
	int cantAprob = 0, cantRechaz = 0;
	int codigoResultado = 0, votMejor = 0;

	float porcentajeFavor = 0, mejorPorcentaje = 0;

	char voto;

	printf("Ingrese la cantidad de votaciones: \n");
	scanf_s("%d", &K);

	if (K > 1 && K < 10)
	{
		for (int i = 0; i < K; i++)
		{
			printf("Ingrese la cantidad de votantes: \n");
			scanf_s("%d", &cantVotantes);

			if (cantVotantes > 1 && cantVotantes < 500)
			{
				for (int j = 0; j < cantVotantes; j++)
				{
					printf("Ingrese el voto: \n");
					scanf_s(" %c", voto);

					if (voto == 'A' || voto == 'a')
					{
						aFavor++;

					}
					else if (voto == 'C' || voto == 'c')
					{
						enContra++;

					}
					else if (voto == 'B' || voto == 'b')
					{
						blanco++;

					}
					else if (voto == 'N' || voto == 'n')
					{
						nulo++;

					}
				}
			}
		}
	}
}