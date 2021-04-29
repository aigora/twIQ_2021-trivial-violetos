#include <stdio.h>
#include <string.h>
#include <unistd.h>


struct Jugador{
	char nombre[50];
	int numerador;
};


int main () {
	
	char  nombre[50], opcion;
	int opcion1;
	
//	system("color 50");
	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	char banner[]={"*-*-*-*-{ TRIVIAL  VIOLETOS }-*-*-*-*-*-{ TRIVIAL  VIOLETOS }-*-*-*-*-*{ TRIVIAL  VIOLETOS }-*-*-*-*"};
	unsigned short longitud, indice, espacio, repite, resto;
	
	//A CONTINUACION SE PROGRAMA EL BANNER
 
	longitud=strlen(banner);
	for (repite=1; repite<=2; repite++) /* repite el proceso 3 veces */
	{
// ******** IMPRIME EN ORDEN DE IZQUIERDA A DERECHA Y LUEGO DESPLAZA ******** 
		for(resto=0; resto<=longitud; resto++) // para caracteres restantes a imprimir 
		{	for (indice=0; indice<=longitud-1-resto; indice++) // seleccion de indices evitando restantes 
			{
				printf("%c", banner[indice]); // imprime indice 
				if (!resto) usleep(10000); // demora el proceso 
			}
			for(espacio=1; espacio<=longitud-resto-1; espacio++)
				printf("\b"); // retrocede 
 
			if (resto) usleep(20000); // demora el proceso 
			printf("\b "); // borra el caracter actual 
		}
 
		for(espacio=1; espacio<=longitud; espacio++) // borra todos los caracteres presentados 
			printf("\b\b ");
		printf("\b"); // se coloca al inicio del desplegado
	}
	printf("*-*-*-*-{ TRIVIAL  VIOLETOS }-*-*-*-*-*-{ TRIVIAL  VIOLETOS }-*-*-*-*-*{ TRIVIAL  VIOLETOS }-*-*-*-*\n");
	printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
	
	

	do{
	printf(" \n");
	printf("BIENVENIDO AL MENU DE TRIVIAL-VIOLETOS \n");
	printf("El mejor entretenimiento de estos tiempos :) \n");
	printf(" \n"); 
	printf("I (Iniciar partida), R (Reglas del juego), S (Salir del programa) \n");
	
	printf("INTRODUZCA LA OPCION:\n");
	fflush(stdin);
	scanf("%c",&opcion);
	
	switch (opcion){
		case 'i':
		case 'I':
			printf(" \n");
			printf("Jugador introduzca su nombre de usuario:\n");
			fflush(stdin);
			scanf("%s",&nombre);//introduce y se guarda el nombre del jugador
			printf(" \n");
			printf("Perfecto %s ahora deberas de elegir una categoria para empezar el juego respondiendo con 1,2,3 o 4:\n",nombre);
			printf("Las categorias de este juego son:\n");
			printf(" 1-Ciencias.\n");
			printf(" 2-Deportes.\n");
			printf(" 3-Entretenimiento.\n");
			printf(" 4-Geografia y Historia.\n");
			printf("¿Que categoria escoges? \n");
			printf(" \n");
			scanf("%d",&opcion1);
				switch(opcion1){
					case 1:
						printf("************\n");
						printf("--CIENCIAS--\n");
						printf("************\n");
						break;
					case 2:
						printf("************\n");
						printf("--DEPORTES--\n");
						printf("************\n");
						break;
					case 3:
						printf("*******************\n");
						printf("--ENTRETENIMIENTO--\n");
						printf("*******************\n");
						break;
					case 4:
						printf("************************\n");
						printf("--Geografia y Historia--\n");
						printf("************************\n");
						break;
					
				}
				
			break;
			
		case 'r':
		case 'R':
			printf("Trivial-Violetos; es un juego  basado en preguntas y respuestas,en el cual hay 4 categorias de preguntas\n");
			printf("para el jugador. El usuario tendra que aceptar una serie de preguntas de las distintas categorias,\n");
			printf(" y con ello se le asignara una puntuacion general , y una en cada categoria.\n");
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
			
			printf("A la hora de elegir una tematica . el jugador decidira el orden de enfrentarse a cada uno de los 4 temas\n");
			printf("que han sido indicados anteriormente.\n");
			printf(" \n");
			
			printf("3-Cuando el jugador acierta la pregunta correspondiente a dicha categoria consigue VIOLETOS (puntos) en \n");
			printf("  función de la dificultad considerada de esta .\n");
			printf(" \n");
			
			printf("4-El usuario contestara a todas las preguntas de una en una con 4 opciones , sumando VIOLETOS de cada  \n");
			printf(" categoria si no falla , lo cual no sumara puntuacion alguna , siguiendo las preguntas hasta completar  .\n");
			printf(" la seccion previamente elegida. Este proceso sera repetido hasta completar todas las categorías.\n");
			printf(" \n");
			
			printf("5.Tras responder a todas las preguntas , se mostrara la puntuacion obtenida y los registros de cada categoria.");
			printf(" \n");
			break;	//aqui acaban las reglas , simplemente se leen
			
			
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
