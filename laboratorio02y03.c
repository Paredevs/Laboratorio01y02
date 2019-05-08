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

#ifndef time_h
#include <time.h>
#define time_h
#endif


#include "funciones.h"  /*Inluimos el encabezado funciones.h donde se encuntra la estructura y sus funciones*/

int main(){
	/*Experimento*/
	int tamano=1000000,unNumero=12,max=10,contador=0;/*Max define el limite de los numeros aleatorios*/
	double tiempo;

			printf("--------Laboratorio 1:Arreglo de Numeros------------\n\n");
			printf("Se Iniciara el Experimento con un tamanio de lista de 1000000 hasta 100000000");
	
			
		/*MiLista=CreaListaNumerosLlena(tamano,max);
	/*printf("Se imprimira la lista\n");*/
	/**/
	/**/      /*Funcion que elimina la Lista, La dejare como comentario para poder imprimir la lista*/
	
	printf("\nSe insertara al final un numero mayor a los de la lista para su busqueda");
		for(tamano;tamano<=100000000;tamano=tamano+10000){	
		Lista *MiLista;	
			MiLista=CreaListaNumerosLlena(tamano,max);	
			MiLista=InsertarNumeroAlFinal(MiLista,unNumero);/*printf("\n");ImprimirLista(MiLista);printf("\nTamano Lista %i",tamano);*/
			tiempo=BuscarSecuencialmente(MiLista,unNumero);
			MiLista=eliminarListaNumeros(MiLista);
			printf("\nContador: %i Tiempo: %.16g milisegundos\n Tamanio Lista:%i\n",contador,tiempo*10000000.0,tamano);	
			tiempo=0;
		 contador++;		
		}
		
		InsertarEnOrdenyBusquedaBinaria();
		InsertarAlFinalQuickSort();
	printf("\n\n");
	

	
	return 1;
}

