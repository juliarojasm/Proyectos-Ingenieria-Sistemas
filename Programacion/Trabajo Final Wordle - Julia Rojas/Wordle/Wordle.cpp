#include <stdio.h>
#include <stdlib.h> // para el numero random
#include <ctype.h> // para poder transformar las palabras a minsculas
#include <string.h>//copiar strings
#include <time.h>//el horario para el random

const int maxPersonajes = 29; //numero fijo de personajes
int rankingPuntos[100];
int cantidadPuntos = 0;

struct personaje //lo hago fuera para poder utilizarlo a lo largo de las funciones y el programa
{
	char nombre[15];
	char genero[15];
	char rol[15];
	char pais[15];
	int anio;
};

struct personaje lista[maxPersonajes] = // lo hago afuera tmb para que sea global, sino existe unicamente en la funcion y cuando termina ya esta.
{
	{"Brimstone", "Masculino", "Controlador", "USA", 2020}, //las declaro como arrays ordenados segun el struct, dentro del mismo struct. si no necesito una libreria.
	{"Jett", "Femenino", "Duelista", "Corea", 2020},
	{"Sova", "Masculino", "Iniciador", "Rusia", 2020},
	{"Phoenix", "Masculino", "Duelista", "UK", 2020},
	{"Sage", "Femenino", "Centinela", "China", 2020},
	{"Omen", "Masculino", "Controlador", "Desconocido", 2020},
	{"Cypher", "Masculino", "Centinela", "Marruecos", 2020},
	{"Breach", "Masculino", "Iniciador", "Suecia", 2020},
	{"Viper", "Femenino", "Controlador", "USA", 2020},
	{"Raze", "Femenino", "Duelista", "Brasil", 2020},
	{"Reyna", "Femenino", "Duelista", "Mexico", 2020},
	{"Killjoy", "Femenino", "Centinela", "Alemania", 2020},
	{"Skye", "Femenino", "Iniciador", "Australia", 2020},
	{"Yoru", "Masculino", "Duelista", "Japon", 2021},
	{"Astra", "Femenino", "Controlador", "Ghana", 2021},
	{"KAYO", "Masculino", "Iniciador", "Indefinido", 2021},
	{"Chamber", "Masculino", "Centinela", "Francia", 2021},
	{"Neon", "Femenino", "Duelista", "Filipinas", 2022},
	{"Fade", "Femenino", "Iniciador", "Turquia", 2022},
	{"Harbor", "Masculino", "Controlador", "India", 2022},
	{"Gekko", "Masculino", "Iniciador", "USA", 2023},
	{"Deadlock", "Femenino", "Centinela", "Noruega", 2023},
	{"Iso", "Masculino", "Duelista", "China", 2023},
	{"Clove", "Nobinario", "Controlador", "Escocia", 2024},
	{"Vyse", "Femenino", "Centinela", "Desconocido", 2024},
	{"Tejo", "Masculino", "Iniciador", "Colombia", 2025},
	{"Waylay", "Femenino", "Duelista", "Tailandia", 2025},
	{"Veto", "Masculino", "Centinela", "Senegal", 2025},
	{"Miks", "Masculino", "Controlador", "Croacia", 2026}
};

int menu()
{
	int opcion;

	printf("Bienvenido a Valodle\n");
	printf("\nJugar (1)\n");
	printf("\nVer ranking (2)\n");
	printf("\nVer personajes (3)\n");
	printf("\nSalir (4)\n");

	printf("\nEscriba la opcion seleccionada (1, 2, 3 o 4): \n");
	scanf_s("%d", &opcion);
	return opcion;
}

void minusculas(char palabra[50])//para poder conparar facilmente
{
	int i = 0;
	while (palabra[i] != '\0') //marca el final de la palabra, hasta que no termine sigue.
	{
		palabra[i] = tolower(palabra[i]);//hace minuscula la letra del while
		i++;
	}
}

int sonIguales(char a[20], char b[20])
{
	int i = 0;

	while (a[i] != '\0' && b[i] != '\0')//verifico una por una
	{
		if (a[i] != b[i])
		{
			return 1;
		}
		i++;
	}
	if (a[i] == '\0' && b[i] == '\0')
	{
		return 0; // veifico q terminaron al mismo tiempo y iguales
	}
	return 1; // una palabra es más larga que la otra,, termina
}

void darPistas(char personajeIngresado, char personajeRandom)
{
	printf("\nPistas:\n");

	if (sonIguales(lista[personajeIngresado].genero, lista[personajeRandom].genero) == 0)
		printf("Genero: Correcto (%s)\n", lista[personajeIngresado].genero);
	else
		printf("Genero: Incorrecto, el genero no es %s\n", lista[personajeIngresado].genero);

	if (sonIguales(lista[personajeIngresado].rol, lista[personajeRandom].rol) == 0)
		printf("Rol: Correcto (%s)\n", lista[personajeIngresado].rol);
	else
		printf("Rol: Incorrecto, el rol no es %s\n", lista[personajeIngresado].rol);

	if (sonIguales(lista[personajeIngresado].pais, lista[personajeRandom].pais) == 0)
		printf("Pais: Correcto (%s)\n", lista[personajeIngresado].pais);
	else
		printf("Pais: Incorrecto, el pais no es %s\n", lista[personajeIngresado].pais);
	if (lista[personajeIngresado].anio == lista[personajeRandom].anio)
		printf("Anio: Correcto (%d)\n", lista[personajeIngresado].anio);
	else if (lista[personajeIngresado].anio < lista[personajeRandom].anio)
		printf("Anio: el anio es mayor que %d\n", lista[personajeIngresado].anio);
	else
		printf("Anio: el anio es menor que %d\n", lista[personajeIngresado].anio);
}

void verPersonajes()
{
	for (int i = 0; i < maxPersonajes; i++)
	{
		printf("\n--%s--\n", lista[i].nombre);
		printf("-%s\n", lista[i].genero);
		printf("-%s\n", lista[i].rol);
		printf("-%s\n", lista[i].pais);
		printf("-%d\n", lista[i].anio);
	}
}

void inicioJuego()
{
	char personajeIngresado[15];
	srand(time(NULL));
	int numAleatorio = (rand() % maxPersonajes); //numero aleatorio, con maximo de numero random
	char personajeRandom[15]; //creo variable para pasar a minus sin modificar la original
	strcpy_s(personajeRandom, sizeof(personajeRandom), lista[numAleatorio].nombre);
	minusculas(personajeRandom);
	int intentos = 5;

	while (intentos > 0)
	{
		printf("Ingrese el nombre del personaje:\n");
		scanf_s("%s", personajeIngresado, (unsigned)sizeof(personajeIngresado));
		minusculas(personajeIngresado);
		int indiceIngresado = -1;

		for (int i = 0; i < maxPersonajes; i++)
		{
			char nombre[15];
			strcpy_s(nombre, sizeof(nombre), lista[i].nombre);
			minusculas(nombre);

			if (sonIguales(personajeIngresado, nombre) == 0)
			{
				indiceIngresado = i;
				break;
			}
		}//veo el indice del personaje para dsps poder comprobar.

		if (sonIguales(personajeIngresado, personajeRandom) == 1)
		{
			intentos--;
			darPistas(indiceIngresado, numAleatorio);//aca compruebo cada campo
			printf("Te quedan %d intentos\n", intentos);
		}
		else
		{
			printf("Ganaste!!\n");
			int puntos = 0;
			puntos = intentos * 20;
			printf("Has conseguido %d puntos.\n", puntos);
			rankingPuntos[cantidadPuntos] = puntos;
			cantidadPuntos++;
			return;
		}
	}
	printf("Perdiste. El personaje era %s\n", personajeRandom);
}

void ranking()
{
	if (cantidadPuntos == 0) //verifica si hay puntos
	{
		printf("Todavia no hay puntajes guardados\n");
		return;
	}

	for (int i = 0; i < cantidadPuntos - 1; i++)//cantidad de ordenamientos, -1 porque ya debria ese uno etsar ordenado
	{
		for (int j = 0; j < cantidadPuntos - 1 - i; j++)//comparacion
		{
			if (rankingPuntos[j] < rankingPuntos[j + 1])
			{
				int aux = rankingPuntos[j];
				rankingPuntos[j] = rankingPuntos[j + 1];
				rankingPuntos[j + 1] = aux;//aux para guardar el num
			}
		}
	}
	printf("\nRanking:\n");
	for (int i = 0; i < cantidadPuntos; i++)
	{
		printf("%d. %d puntos\n", i + 1, rankingPuntos[i]);
	}
}

int main()
{
	int opcion;
	do 
	{
		opcion = menu();
		switch (opcion) 
		{
		case 1: 
			inicioJuego();
			break;
		case 2:
			ranking();
			break;
		case 3: 
			verPersonajes();
			break;
		case 4:
			break;
		default: //para que pase cuando se ingresa un numero invalido
		printf("Opcion invalida\n");//vuelve al menu
		break;
		}
	} while (opcion != 4);
}