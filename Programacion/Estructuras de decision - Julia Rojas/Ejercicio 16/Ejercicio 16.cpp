#include <stdio.h>

int main()
{
	int filamento = 0, base_nivelado = 0;

	printf("Ingrese la cantidad de filamento:\n");
	scanf_s("%d", &filamento);


	if (filamento > 25)
	{
		printf("Indique si la base esta nivelada: \n");
		scanf_s("%d", &base_nivelado);

		if (base_nivelado == 1)
		{
			printf("Iniciar impresion.\n");
		}
		else
		{
			printf("La base no esta nivelada.\n");
		}
	}
	else
	{
		printf("El filamento es insuficiente.\n");
	}
}