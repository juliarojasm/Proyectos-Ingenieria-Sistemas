#include <stdio.h>

int main()
{
	int array[5] = { 3, 8, 1, 9, 4 };
	int aux = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5-i-1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j+1];
				array[j+1] = array[j];
				array[j] = aux;
			}
		}
	}
}