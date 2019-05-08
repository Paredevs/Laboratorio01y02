#ifndef stdio_h/*Denuvo pregunto si se incluyeron las bibliotecas para que no haya problemas*/
#include <stdio.h>
#define stdio_h
#endif

#ifndef stdlib_h
#include <stdlib.h>
#define stdio_h
#endif

typedef struct lista{/*Defino la estructura lista*/
	int *datos;
	int tamano_lista;
	int c_numeros;
}Lista;

int eliminarListaNumeros(Lista *MiLista);
int buscarNumeroEnListaNumeros(Lista *MiLista,int);
int  ImprimirLista(Lista *arreglo);

Lista *creaListaNumerosVacia(int tamano){
		
		Lista *arreglo;
		arreglo=(Lista*)malloc(tamano*sizeof(int));
			if(arreglo==NULL){/*Si el Puntero "arreglo" es Nulo significa que no hay memoria disponible"*/
				printf("Memoria no disponible");
			}
		arreglo->tamano_lista=tamano;
		arreglo->c_numeros=0;
		arreglo->datos=malloc(tamano*sizeof(int));
		return arreglo;

}

Lista *CreaListaNumerosLlena(int tamano,int max){
	
		srand(time(NULL));	
		Lista  *arreglo_vacio;
		arreglo_vacio=creaListaNumerosVacia(tamano);
		int i=0;
		for(i;i<tamano;i++){	
			(*arreglo_vacio).datos[i]=1+rand()%(max);
		}
	
		arreglo_vacio->c_numeros=tamano;
	
	return arreglo_vacio;
}

int  eliminarListaNumeros(Lista *arreglo){

	free(arreglo);
	return arreglo;
	
}
int  ImprimirLista(Lista *arreglo){
	
	int i;
		for(i=0;i<(*arreglo).c_numeros;i++){
			 printf("%i ",(*arreglo).datos[i]);
		}
}

int buscarNumeroEnListaNumeros(Lista *arreglo,int unNumero){

	int i;
	for(i=0;i<(arreglo->c_numeros);i++){
		if((*arreglo).datos[i]==unNumero){
			return i;
			break;
		}
	}
	return -1;
	
}
