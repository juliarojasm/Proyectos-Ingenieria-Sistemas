#include <stdio.h>

int main()
{
	int contrasena = 0;

	while (contrasena != 1234)
	{
		printf("Ingrese su contrase%ca: \n", 164);
		scanf_s("%d", &contrasena);
	}
	
}