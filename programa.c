#include <stdio.h>
/*	Archivos de cabecera - Bibliotecas */
#include <string.h>
#include <unistd.h>
#include<stdlib.h>
#include <windows.h>

/* Prototipo de funciones */
void imprimirAdios();
void imprimirCiencias();
void imprimirDeportes();
void imprimirEntretenimiento();
void imprimirGeoHis();
char menu();

/* Definicion de estructuras */
struct Jugador{
	char nombre[50];
	int numerador;
};

/* Main del programa */
int main () {
	
	system("color 57");
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	char  nombre[50], opcion;
	int opcion1;
	

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

		system("cls");
		opcion=menu();
	
	switch (opcion){		//Aquí se organiza el menú en función de la opción elegida
		case 'i':		//por el usuario .
		case 'I':
			printf(" \n");
			printf("Jugador introduzca su nombre de usuario:\n");
			fflush(stdin);
			scanf("%s",&nombre);//introduce y se guarda el nombre del jugador
			printf(" \n");
			printf("Perfecto %s ahora deber%cs de elegir una categor%cas para empezar el juego respondiendo con 1,2,3 o 4:\n",nombre,160,161);
			printf("Las categor%cas de este juego son:\n",161);
			printf(" 1-Ciencias.\n");
			printf(" 2-Deportes.\n");
			printf(" 3-Entretenimiento.\n");
			printf(" 4-Geografia y Historia.\n");
			printf("¿Que categor%ca escoges? :o \n",161);
			printf(" \n");
			scanf("%d",&opcion1);
				switch(opcion1){
					case 1:

						imprimirCiencias();
						return 0;
						break;
					case 2:
						imprimirDeportes();
						return 0;
						break;
					case 3:
						imprimirEntretenimiento();
						return 0;
						break;
					case 4:
						imprimirGeoHis();
						return 0;
						break;
					
				}
				
			break;
			
		case 'r':
		case 'R':
			system("cls");
			printf("Trivial-Violetos; es un juego  basado en preguntas y respuestas,en el cual hay 4 categor%cas de preguntas\n",161);
			printf("para el jugador. El usuario tendra que aceptar una serie de preguntas de las distintas categor%cas,\n",161);
			printf(" y con ello se le asignara una puntuaci%cn general , y una en cada categor%ca.\n",162,161);
			printf(" \n");
			
			printf("1-Las categor%cas de este juego son:\n",161);
			printf(" -Ciencias.\n");
			printf(" -Deportes.\n");
			printf(" -Entretenimiento.\n");
			printf(" -Geograf%ca e historia.\n",161);
			printf(" \n");
			
			printf("A la hora de elegir una tem%ctica . el jugador decidir%c el orden de enfrentarse a cada uno de los 4 temas\n",160,160);
			printf("que han sido indicados anteriormente.\n");
			printf(" \n");
			
			printf("2-Cuando el jugador acierta la pregunta correspondiente a dicha categor%ca consigue VIOLETOS (puntos) en \n",161);
			printf("  funci%cn de la dificultad considerada de esta .\n",162);
			printf(" \n");
			
			printf("3-El usuario contestara a todas las preguntas de una en una con 4 opciones , sumando VIOLETOS de cada  \n");
			printf(" categor%ca si no falla , lo cu%cl no sumar%c puntuaci%cn alguna , siguiendo las preguntas hasta completar  .\n",161,160,160,162);
			printf(" la secci%cn previamente elegida. Este proceso sera repetido hasta completar todas las categor%cas.\n",162,161);
			printf(" \n");
			
			printf("4.Tras responder a todas las preguntas , se mostrara la puntuaci%cn obtenida y los registros de cada categor%ca.",162,161);
			printf("\n\n");
			system("pause");
			break;	//aqui acaban las reglas , simplemente se leen
			
			
		case 's':  
		case 'S':
			imprimirAdios();
			return 0;//salir del programa
		default:
		printf("la opci%cn es incorrecta:\n",162);
	}
	
	}while (opcion<'I','i'||opcion<'S','s'); 
	
	return 0;
}

/* Definicion de las funciones */

void imprimirAdios(){
	printf(":D :D :D :D :D |     H A S T A     | :D :D :D :D :D\n");
	printf(":D :D :D :D :D |    P R O N T O    | :D :D :D :D :D\n");
	printf(":D :D :D :D :D |   J U G A D O R   | :D :D :D :D :D\n");
}

void imprimirCiencias(){
	printf("Usted ha elegido la opcion de:       \n");
	printf("                                     \n");
	printf("     C            C             S    \n");
	printf("        I     N       I      S       \n");
	printf("           E             A           \n");
}

void imprimirDeportes(){ 
	printf("Usted ha elegido la opcion de:  \n");
	printf("                                          \n");
	printf("     ****                       ****      \n");
	printf("    ******   D E P O R T E S   ******     \n");
	printf("    ******                     ******     \n");
	printf("     ****                       ****      \n");
	printf("                                          \n");

}

void imprimirEntretenimiento(){
	printf("Usted ha elegido la opcion de:                \n");
	printf("                                              \n");
	printf(":P   :P    :P    :P    :P     :P   :P    :P   \n");
	printf("   :)   :)    :)    :)    :)     :)   :)    :)\n");
	printf("       E N T R E T E N I M I E N T O          \n");
	printf(":P   :P    :P    :P    :P     :P   :P    :P   \n");
	printf("   :)   :)    :)    :)    :)     :)   :)    :)\n");
}

void imprimirGeoHis(){
	
	printf("Usted ha elegido la opcion de:                  \n");
	printf("  __________________________________________    \n");
	printf(" | ---------  G E O F R A F I A  ---------- |   \n");
	printf(" | ---------                     ---------- |   \n");
	printf(" | ---------          E          ---------- |   \n");
	printf(" | ---------                     ---------- |   \n");
	printf(" | ---------   H I S T O R I A   ---------- |   \n");
	printf(" |__________________________________________|   \n");
}

char menu(){
	char opcion;
	
	printf("-------BIENVENIDO AL MENU DE TRIVIAL_VIOLETOS------- \n");
	printf("  (: El mejor entretenimiento de estos tiempos :) \n");
	printf("   \n"); 
	printf("----> Pulse S para (salir del programa).\n");
	printf("----> Pulse I para (iniciar partida).\n");
	printf("----> Pulse R para (reglas del juego).\n");
	printf("  \n ");
	fflush(stdin);
	scanf("%c",&opcion);
	
	return opcion;
}
















