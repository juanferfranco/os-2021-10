/*
 ============================================================================
 Name        : Ejercicio1-1.c
 Author      : JuanFranco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


// Prototipo la función.
void functionPointer(int *, int);

int main(void) {


	int variable = 20;
	printf("variable = %d\n", variable);

	// Punteros: variables donde se almancenan direcciones
	int *pvariable = &variable;

	*pvariable = 30;

	printf("variable = %d\n", variable);

	functionPointer(pvariable, 50);

	printf("variable = %d\n", variable);

	return EXIT_SUCCESS;
}


void functionPointer(int * pvar,int value){
	// *pvar es como tener el valor de la variable

	*pvar =    (*pvar) + value;

}
