#include <stdio.h>

int main () {
	
	char opcion, jugador1, jugador2, numero1, numero2; 
	//	La partida consistirÃ¡ en que cada jugador contarÃ¡ con una caja con 4 'quesitos'/triÃ¡ngulos, que hemos denominado Violetos, y el ganador del juego serÃ¡ aquel que consiga completar su caja de Violetos. Cada Violeto se consigue acertando durante la partida 1 pregunta de cada una de las 4 temÃ¡ticas que estarÃ¡n en la ruleta. /

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
			printf("Jugador.1 introduzca su nombre de usuario:\n");
			fflush(stdin);
			scanf("%c",&jugador1);
			
			printf("Jugador.2 introduzca su nombre de usuario:\n");
			fflush ( stdin );
			scanf("%c",&jugador2);
			
			printf("Jugador 1; Elija un número del 1 al 6:\n");
			fflush(stdin);
			scanf("%c",&numero1);
			
			printf("Jugador 2; Elija un número del 1 al 6:\n");
			fflush(stdin);
			scanf("%c",&numero2);
			
			if (numero1>numero2)
			printf("Empieza jugador 1");
			
			if(numero1<numero2)
			printf("Empieza jugador 2");
			
			break;
			
		case 'r':
		case 'R':
			printf("Trivial_Violetos; es un juego  basado en preguntas y respuestas,en el cual hay 4 categorias (participantes:2max y min).\n");
			printf("El usuario tendra que obtener antes de finalizar la partida todos los Violetos posibles de las distintas categorias,\n");
			printf(" y con ello ser el GANADOR DE LA PARTIDA.\n");
			printf(" \n");
			
			printf("1-Al inicio del juego, cada uno de los integrantes del mismo deberÃ¡n de elegir un numero 1-6 incluidos,\n");
			printf("el mayor de estos determinara quien va a comenzar la partida (en caso de empate, ambos deberÃ¡n de elegir de nuevo un numero).\n");
			printf(" \n");
			
			printf("2-Las categorias de este juego son:\n");
			printf(" -Ciencias.\n");
			printf(" -Deportes.\n");
			printf(" -Moda y Cine.\n");
			printf(" -Geografia.\n");
			printf(" \n\n");
			
			printf("A la hora de elegir una tematica, aparecera una ruleta que determinara que tipo de pregunta se realizara, dentro de los 4 temas");
			printf("indicados anteriormente.\n");
			
			printf("3-Cuando el jugador acierta la pregunta correspondiente a dicha categoria consigue 1 VIOLETO y con ello la opcion de cambiar de categoria,\n");
			printf("  en el caso de no acertar la pregunta perdera turno y le tocara al siguiente jugador y asi consecutivamente.\n");
			
			printf("4-El usuario que consiga recolectar lo antes posible los 4 VIOLETOS \n");
			printf(" (correspondientes a cada una de las categorias mencionadas al incio) gana la partida y con ello se proclama GANADOR DEL JUEGO!!.\n");
			
			printf("5.	Por cada victoria, se conseguirá una bonificación en forma de piezas para 'Violeteros', que son las cajas en las que se guardan");
			printf("los Violetos, con diferentes formas y tonalidades.");
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
