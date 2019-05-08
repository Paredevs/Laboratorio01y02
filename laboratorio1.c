//Laboratorio 01: Arreglo de Numeros
//Rodrigo Ignacio Paredes Philippe 20.167.075-6
//Ingeniria en computacion  Universidad de La Serena

#ifndef stdio_h  /*Pregunto si se incluyeron las bibliotwcas stdio.h y stdlib.h para que no hayan errores*/
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdio_h
#endif

#include "funciones.h"  /*Inluimos el encabezado funciones.h donde se encuntra la estructura y sus funciones*/

int main(){
	
	int tamano,unNumero,max=100,indice; /*Max define el limite de los numeros aleatorios*/
	Lista *MiLista;
		printf("--------Laboratorio 1:Arreglo de Numeros------------\n\n");
		printf("De que tamano quiere la lista?\n");
		scanf("%i",&tamano);
	MiLista=CreaListaNumerosLlena(tamano,max);
	printf("Se imprimira la lista\n");
	ImprimirLista(MiLista);
	/*MiLista=eliminarListaNumeros(MiLista);*/      /*Funcion que elimina la Lista, La dejare como comentario para poder imprimir la lista*/
		printf("\n¿Que Numero desea buscar?\n");
		scanf("%i",&unNumero);
	indice=buscarNumeroEnListaNumeros(MiLista,unNumero); /*Paso a la funcion la variable "unNumero" la cual contiene el numero que el usuario desea buscar y retoma el indice de la ubicacion o un -1 si no lo encuentra*/
	
		if(indice==-1){/*No encontro el Numero, el programa termina para no crear conflictos*/
			printf("Error: No se pudo encontrar el numero");
			return 0;
		}
			printf("\nEl numero se encuentra en el Indice:%i",indice);
	
	return 1;
}

