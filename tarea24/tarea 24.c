#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int dato;
	
	FILE *ptrArchivo;
	ptrArchivo=fopen("datos.dat","wb");
	if (ptrArchivo==NULL){
		printf("error al abrir el archivo\n");

	}else{
		
	printf("dame el dato a guardar al archivo");
	scanf("%d",&dato);
	
	fprintf(ptrArchivo,"%d\n",dato);
		fprintf(ptrArchivo,"%d\n",++dato);

	fprintf(ptrArchivo,"%d\n",++dato);
	fclose(ptrArchivo);
	}
	
	return 0;
}
