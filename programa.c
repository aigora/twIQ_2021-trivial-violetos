#include <stdio.h>
#include <string.h>

struct Jugador{
	char nombre[50];
	int numerador;
};


int main () {
	
	char  nombre[50], opcion;
	int opcion1;
	
	system("color 50");

	do{
	printf("BIENVENIDO AL MENU DE TRIVIAL_VIOLETOS \n");
	printf("El mejor entretenimiento de estos tiempos :) \n");
	printf(" \n"); 
	printf("I (Iniciar partida), R (Reglas del juego), S (Salir del programa) \n");
	
	printf("INTRODUZCA LA OPCION:\n");
	fflush(stdin);
	scanf("%c",&opcion);
	
	switch (opcion){
		case 'i':
		case 'I':
			printf("Jugador introduzca su nombre de usuario:\n");
			fflush(stdin);
			scanf("%s",&nombre);
			printf("Perfecto %s ahora deberas de elegir una categoria para empezar el juego:\n",nombre);
			printf("Las categorias de este juego son:\n");
			printf(" 1-Ciencias.\n");
			printf(" 2-Deportes.\n");
			printf(" 3-Entretenimiento.\n");
			printf(" 4-Geografia y Historia.\n");
			printf(" \n\n");
			scanf("%d",&opcion1);
				switch(opcion1){
					case 1:
						printf("--CIENCIAS--\n");
						break;
					case 2:
						printf("--DEPORTES--\n");
						break;
					case 3:
						printf("--ENTRETENIMIENTO--\n");
						break;
					case 4:
						printf("--Geografia y Historia--\n");
						break;
					
				}
				
			break;
			
		case 'r':
		case 'R':
			printf("Trivial_Violetos; es un juego  basado en preguntas y respuestas,en el cual hay 4 categorias de preguntas\n");
			printf("para el jugador. El usuario tendra que aceptar una serie de preguntas de las distintas categorias,\n");
			printf(" y con ello se le asignará una puntuación general , y una en cada categoría.\n");
			printf(" \n");
			
			printf("1-Al inicio del juego, cada uno de los integrantes del mismo deberÃƒÂ¡n de elegir un numero 1-6 incluidos,\n");
			printf(" el mayor de estos determinara quien va a comenzar la partida (en caso de empate, ambos deberÃƒÂ¡n de \n");
			printf(" elegir de nuevo un numero).\n");
			printf(" \n");
			
			printf("2-Las categorias de este juego son:\n");
			printf(" -Ciencias.\n");
			printf(" -Deportes.\n");
			printf(" -Entretenimiento.\n");
			printf(" -Geografia e historia.\n");
			printf(" \n");
			
			printf("A la hora de elegir una temática . el jugador decidirá el orden de enfrentarse a cada uno  de los 4 temas\n");
			printf("que han sido indicados anteriormente.\n");
			printf(" \n");
			
			printf("3-Cuando el jugador acierta la pregunta correspondiente a dicha categoria consigue VIOLETOS (puntos) en \n");
			printf("  función de la dificultad considerada de esta .\n");
			printf(" \n");
			
			printf("4-El usuario contestará a las preguntas en orden de menor a mayor dificultad , sumando VIOLETOS de cada  \n");
			printf(" categoría hasta el fallo , momento en el cual tendrá la opción de escoger otra categoría y no podrá .\n");
			printf(" responder a más cuestiones de la errada. Este proceso será repetido hasta completar todas las categorías.\n");
			printf(" \n");
			
			printf("5.Tras responder a todas las preguntas , se mostrará la puntuación obtenida y los registros de cada categoría.");
			printf(" \n");
			break;
			
			
		case 's':  
		case 'S':
			printf("Hasta pronto!!!\n");
			return 0;//salir del programa
		default:
		printf("la opcion es incorrecta:\n");
	}
	
	}while (opcion<'I','i'||opcion<'S','s'); 
	
	return 0;
}
