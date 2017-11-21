#include <stdio.h>

struct alumnos
{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
};

typedef struct alumnos ALUMNO;

ALUMNO nuevoAlumno()
{
	ALUMNO tmp;
	
	//struct alumnos var1; se le cambio esta parte
	printf("introduce la edad");
//	scanf("%d",&tmp.edad);
	scanf("%*d%[^\n],temp.edad");
	
	printf("introduce el nombre");
/*	fflush(stdin);
	gets("%c",&tmp.nombre);
*/
	scanf("%*s%[^\n],temp.nombre");
	

	printf("introduce el genero");
//	scanf("c",&tmp.genero);
		scanf("%*c%[^\n],temp.genero");
	
	printf("introduce carrera");
//	fflush(stdin);
//	gets("%c",&tmp.carrera);
	scanf("%*s%[^\n],temp.carrera");
	
	printf("introduce numero de cuenta");
	fflush(stdin);
//	gets("%c",&tmp.nCuenta);
	scanf("%*s%[^\n],temp.nCuenta");

	
	return tmp;
}
void imprimeAlumno(ALUMNO al){
	printf("***************************\n");
	printf("nombre %s\n",al.nombre);
		printf("edad %d\n",al.edad);
			printf("genero %c\n",al.genero);
				printf("carrea %s\n",al.carrera);
					printf("numero de cuenta %s\n",al.nCuenta);
}
