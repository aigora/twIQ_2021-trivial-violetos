/*	Archivos de cabecera - Bibliotecas */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <windows.h>

#define BUFFER_LEN 1024
#define PREGUNTA_LEN 200
#define PREGUNTAS_NUM_PER_FILE 15
#define RESPUESTA_NUM 4
#define RESPEUSTA_LEN 50

/* Prototipo de funciones */
void imprimirAdios();
void imprimirCiencias();
void imprimirDeportes();
void imprimirEntretenimiento();
void imprimirGeoHis();
char menu();
int categoriasPreguntas();

/* Definicion de estructuras */
struct Jugador{
	char nombre[50];//Aquí almacena el nombre el jugador.
	char contras[50];//Aquí su contraseña
	int numerador;
};

struct preguntas
{
   char pregunta[PREGUNTA_LEN];
   char respuesta[RESPUESTA_NUM][RESPEUSTA_LEN];
   int correcta;
} typedef preguntas_t;


/* Main del programa */
int main () {
	
	system("color 57"); //Color de fondo de consola:5--> MORADO, color de texto:7--> BLANCO
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	char  nombre[50], opcion;
	int opcion1;
	///////
		FILE * pfichero;
	struct Jugador partida[600];
	char nFichas=0;
	int i,longitud1,numero, contador=0;
	

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
		opcion = menu();
	
		switch (opcion){		
			case 'i':		    
			case 'I':
				
				printf("Introduce una opcion:\n");
					printf("1-->Registrarse\n");
					printf("2-->Iniciar sesion\n");
	
					pfichero= fopen("datos.txt", "a");//Abrimos fichero.
						if(pfichero == NULL){
							printf("No se encuentra el fichero\n");//Caso en el que no se encuentre el fichero sale.
							return 0;
   						}
						while(fscanf(pfichero, "%s %s", partida[nFichas].nombre, partida[nFichas].contras)!= EOF){
							nFichas++;
						}

					do{
	                   scanf("%d", &numero);
					}while(numero!=1 && numero !=2);
					
					if(numero == 2){//Caso para iniciar sesión.
					do{
					printf("Usted ya tiene una cuenta\n");
					printf("Introduce el nombre de usuario:\n");
					fflush(stdin);
					scanf("%s",partida[nFichas].nombre);
					printf("\n");
					printf("Introduce la contrase%ca(debe tener mas de 4 digitos):\n",164);
					fflush(stdin);
					scanf("%s", partida[nFichas].contras);
					printf("\n");
					longitud1 = strlen(partida[nFichas].contras);
					if(longitud1<4){
						printf("La contrase%ca tiene que ser mayor que 6 caracteres\n",164);
						printf("\n");
					}
	   				}while(longitud1<4);
						fprintf(pfichero,"Nombre de usuario:%s Contrase%ca:%s\n",partida[nFichas].nombre,164,partida[nFichas].contras);
						printf("Usuario y contrase%ca CORRECTA\n",164);	
					}else if(numero == 1){//Caso para registrarse.
				do{
					printf("Proceda a registrarse,introduzca su nombre de usuario:\n");
					scanf("%s", partida[nFichas].nombre);
					printf("\n");
					printf("Introduzca su contrase%ca:(debe tener mas de 4 caracteres):\n",164);
					scanf("%s", partida[nFichas].contras);
					printf("\n");
					longitud1 = strlen(partida[nFichas].contras);
					if(longitud1<4){
						printf("La contrase%ca tiene que ser mayor que 4 caracteres\n",164);
					}
				}while(longitud1<4);

	  				printf("Perfecto!! la creaci%cn de su cuenta ha sido realizada.\n",162);
	 				printf("\n");
					fprintf(pfichero,"Nombre de usuario:%s\n Contrasenna:%s\n",partida[nFichas].nombre,partida[nFichas].contras);
					fclose(pfichero);//cerramos fichero 
					
				}

				//Aqui empieza la partida del jugador pidiendole el nombre de usuario.
				printf(" \n");
				printf("Jugador introduzca su nombre de usuario:\n");
				fflush(stdin);
				scanf("%s",nombre);//introduce y se guarda el nombre del jugador
				printf(" \n");
				printf("Perfecto %s ahora deber%cs de elegir una categor%cas para empezar el juego respondiendo con 1,2,3 o 4:\n",nombre,160,161);
				printf("Las categor%cas de este juego son:\n",161);
				printf(" 1-Ciencias.\n");
				printf(" 2-Deportes.\n");
				printf(" 3-Entretenimiento.\n");
				printf(" 4-Geografia y Historia.\n");
				printf("Que categor%ca escoges? :o \n",161);
				printf(" \n");
				scanf("%d",&opcion1);
				switch(opcion1){
					case 1:
						system("cls");
						imprimirCiencias();
						categoriasPreguntas(".\\preguntas_ficheros\\ciencias.csv");
						break;
					case 2:
						system("cls");
						imprimirDeportes();
						categoriasPreguntas(".\\preguntas_ficheros\\deportes.csv");
						break;
					case 3:
						system("cls");
						imprimirEntretenimiento();
						categoriasPreguntas(".\\preguntas_ficheros\\entretenimiento.csv");
						break;
					case 4:
						system("cls");
						imprimirGeoHis();
						categoriasPreguntas(".\\preguntas_ficheros\\GeoHisto.csv");
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
				system("cls");
				imprimirAdios();
				return 0;
				break;
			default:
				printf("la opci%cn es incorrecta:\n",162);
				break;
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
	
	printf("-------| BIENVENIDO AL MENU DE TRIVIAL_VIOLETOS |------- \n");
	printf("   \n");
	printf("    (: El mejor entretenimiento de estos tiempos :) \n");
	printf("   \n"); 
	printf("----> Pulse S para (salir del programa).\n");
	printf("----> Pulse I para (iniciar partida).\n");
	printf("----> Pulse R para (reglas del juego).\n");
	printf("  \n ");
	fflush(stdin);
	scanf("%c",&opcion);
	
	return opcion;
}

int categoriasPreguntas(char * rutaFichero){
	
	FILE * fpreguntas;
	preguntas_t setPreguntas[PREGUNTAS_NUM_PER_FILE];
	char buffer[BUFFER_LEN];
	char *elemen;
	int i, j, respuesta_usuario, contador=0,acumulador=0;

   fpreguntas = fopen(rutaFichero, "r");
   if (fpreguntas == NULL)
   {
      printf("Error al abrir el fichero.\n");
      return 1;
   }

   /* Iniciamos contador para llevar la cuenta de las lineas*/
   i = 0;

   /* Mientras que no lleguemos al fina lde fichero */
   while (!feof(fpreguntas))
   {

      /* Vamos a leer una linea del fichero */
      if (fgets(buffer, BUFFER_LEN - 1, fpreguntas) == NULL)
         break;

      /* Reiniciamos el contador de valores */
      j = 0;

      /* Vamos a procesar el buffer */
      elemen = strtok(buffer, ",");

      /* Vamos sacando los valores separadops por coma de la linea */
      while (elemen != NULL)
      {

         if (j == 0)
         {

            strcpy(setPreguntas[i].pregunta, elemen);
         }
         else if (j == RESPUESTA_NUM + 1)
         {

            setPreguntas[i].correcta = atoi(elemen);
         }
         else
         {

            strcpy(setPreguntas[i].respuesta[j - 1], elemen);
         }

         elemen = strtok(NULL, ",");
         j++;
      }

      /* Incrementamos las lineas */
      i++;
   }
   
   

   /* A PARTIR DE AQUI YA ESTÁN LAS PREGUNTAS CARGADAS EN EL PROGRAMA, mediante el uso de fichero agnóstico y no como fichero de texto si no como (csv): 
    coma separated  values*/
   for (i = 0; i < PREGUNTAS_NUM_PER_FILE; i++)
   {

      printf("\n\nPregunta %d:  %s\n\n", i + 1, setPreguntas[i].pregunta);
      for (j = 0; j < RESPUESTA_NUM; j++)
      {
         printf("%d) %s\n", j + 1, setPreguntas[i].respuesta[j]);
      }
      printf("\nIntroduzca su respuesta: ");
      scanf("%d",&respuesta_usuario);

      // ES CORRECTA? -> TENGO QUE TRADUCIR EL STRING A INT -> atoi() -> 
     
	  if (setPreguntas[i].correcta == respuesta_usuario ){
	   printf("CORRECTA :) +1 VIOLETO \a\n");
	   acumulador += respuesta_usuario;
	   contador++; 
	 } else{
	 	printf("INCORRECTA :( \n");
	 }
      printf("\n-----------------------------------------");
      system("cls");
   }
   
   printf("\n\n");
   printf("Has acertado %d preguntas, obtienes en esta categor%ca un total de:  %d VIOLETOS\n",contador,161,contador);
   printf("Fant%cstico,ha terminado su partida.\n ",160);
   printf("A continuaci%cn, qu%c desea hacer?\n\n\n",162,130);
   
   menu();
   fclose(fpreguntas);
   return 0;
}
















