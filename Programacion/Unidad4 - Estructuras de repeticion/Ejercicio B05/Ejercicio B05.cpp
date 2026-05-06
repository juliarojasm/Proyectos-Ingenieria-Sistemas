#include <stdio.h>

int main()
{

	int edad = 0, may18 = 0;

	while (edad >= 0)
	{
		printf("Ingrese una edad: \n");
		scanf_s("%d", &edad);

		if (edad > 18)
		{
			may18++;
		}
	}

	printf("Las edades mayores a 18 son: \n%d", may18);

}