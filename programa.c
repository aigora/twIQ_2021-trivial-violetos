#include <stdio.h>

int main () {
	
	char opcion,jugador1, jugador2;
	

	do{
	printf("BIENVENIDO AL MENU DE TRIVIAL_VIOLETOS \n");
	printf("El mejor entreteimiento de estos tiempos :) \n");
	printf(" \n");
	printf("I (Iniciar partida), R (Reglas del juego), S (Salir del programa) \n");
	
	printf("INTRODUZCA LA OPCION:\n");
	fflush(stdin);
	scanf("%c",&opcion);
	
	switch (opcion){
		case 'i':
		case 'I':
			printf("Jugador.1 introduzca su nombre de usuario:\n");
			fflush(stdin);
			scanf("%c",&jugador1);
			printf("Jugador.2 introduzca su nombre de usuario:\n");
			fflush(stdin);
			scanf("%c",&jugador2);
			break;
		case 'r':
		case 'R':
			printf("Trivial_Violetos; es un juego  basado en preguntas y respuestas,en el cual hay 4 categorias (participantes:2max y min).\n");
			printf("El usuario tendra que obtener antes de finalizar la partida todos los Violetos posibles de las distintas categorias,\n");
			printf(" y con ello ser el GANADOR DE LA PARTIDA.\n");
			printf(" \n");
			printf("1-Al inicio del juego, cada uno de los integrantes del mismo deberán de elegir un numero 1-6 incluidos,\n");
			printf("el mayor de estos determinara quien va a comenzar la partida (en caso de empate, ambos deberán de elegir de nuevo un numero).\n");
			printf(" \n");
			printf("2-Las categorias de este juego son:\n");
			printf(" -Ciencias.\n");
			printf(" -Deportes.\n");
			printf(" -Moda y Cine.\n");
			printf(" -Geografia.\n");
			printf(" \n\n");
			printf("3-Cuando el jugador acierta la pregunta correspondiente a dicha categoria consigue 1 VIOLETO y con ello la opcion de cambiar de categoria,\n");
			printf("  en el caso de no acertar la pregunta perdería turno y le tocaría al siguiente jugador y asi consecutivamente.\n");
			printf("4-El usuario que consiga recolectar lo antes posible los 4 VIOLETOS \n");
			printf("  (correspondientes a cada una de las categorias mencionadas al incio) gana la partida y con ello se proclama GANADOR DEL JUEGO!!.\n");
			break;
		case 's':  
		case 'S':
			printf("Hasta pronto!!!\n");
			return 0;//salir del programa
		default:
		printf("la opcion es incorrecta:\n");
	}
	
	}while (opcion!='S');
	
	
}
