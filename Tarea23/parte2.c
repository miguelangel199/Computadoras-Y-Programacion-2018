#include <stdio.h>
#include <stdlib.h>
#include "alumnos.h"
#define MAX 3
int main(int argc, char *argv[]) {
	
	ALUMNO lista[MAX];
	
	int j=0;
	for(j=0; j<MAX;j++){
		printf("datos alumno %d\n",j+1);
		lista[j]=nuevoAlumno();
	}
	for(j=0; j<MAX;j++){
		imprimeAlumno(lista[j]);
	}
	
	
	return 0;
}
