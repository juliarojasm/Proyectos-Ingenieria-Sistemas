#include <stdio.h>

int main()
{
	int usuario_valido=0, hora_permitida=0;

	printf("Ingrese su usuario: \n");
	scanf_s("%d", &usuario_valido);
	printf("Ingrese hora permitida en formato 24hs:\n");
	scanf_s("%d", &hora_permitida);

	if ((usuario_valido == 1) && (hora_permitida > 0) && (hora_permitida <= 12))
	{
		printf("Acceso permitido:\n");
	}
	else
	{
		printf("Acceso denegado");
	}
	
}