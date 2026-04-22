#include <stdio.h>
#include <stdlib.h>

int main()
{
	int edad1, edad2, altura1, altura2, mayoralt; //Suponiendo que se ingrese la altura en cm, sino seria un float

	printf("Ejercicio 6 - Edad y altura\n");

	printf("Ingrese la edad de la primera persona:\n");
	scanf_s("%d", &edad1);
	printf("Ingrese la altura de la primera persona en cm:\n");
	scanf_s("%d", &altura1);
	printf("Ingrese la edad de la segunda persona:\n");
	scanf_s("%d", &edad2);
	printf("Ingrese la altura de la segunda persona en cm:\n");
	scanf_s("%d", &altura2);


	if (edad1 > edad2)
	{
		mayoralt = altura1;
		printf("La estatura del de mayor edad es: %d\n", mayoralt);
	}
	else
	{
		if (edad2 > edad1)
		{
			mayoralt = altura2;
			printf("La estatura del de mayor edad es: %dcm\n", mayoralt);
		}
		else
		{
			printf("Sus edades son iguales\n");
		}
	}

	system("pause");

}