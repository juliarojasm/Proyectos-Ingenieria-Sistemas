#include <stdio.h>

int main()
{
	int array[6] = { 15,3,22,8,1,12 };
	int aux = 0;

	for (int i = 0; i<6-1; i++)
	{
		for (int j = 0;j < 6 - 1 - i;j++)
		{
			if (array[j] < array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
			}
		}
	}
}