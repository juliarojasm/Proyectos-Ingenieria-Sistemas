#include <stdio.h>

int main()
{
	int array[7] = { 3,8,12,15,20,25,30 };
	int inicio = 0, fin = 6, medio;
	int buscado = 20;

	while (inicio <= fin) // se repite mientras q inicio no se haya pasado d fin
	{
		medio = (inicio + fin) / 2;//calculo el medio
			if (array[medio] == buscado)
			{
				printf("Ha sido encontrado, el medio es el numero");
				break; //ya ha sido encontrado
			}
			else if (array[medio] > buscado)
			{
				fin = medio - 1; //el buscado es menor al array, asiq va a buscar el medio sin contar este ultimo
			}
			else
			{
				inicio = medio + 1;
			}
	}
}	