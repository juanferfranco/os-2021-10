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

int main(void) {


	int variable = 20;
	printf("variable = %d\n", variable);

	// Punteros: variables donde se almancenan direcciones
	int *pvariable = &variable;

	*pvariable = 30;

	printf("variable = %d\n", variable);


	return EXIT_SUCCESS;
}
