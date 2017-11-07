#include <stdio.h>

	int j=0;
	int k=0;
	int filas=0;
	int columnas=0;
void fnHacerCuadro(){

for (j=0; j<=filas-1; j=j+1){
		for(k=1; k<=columnas; k=k+1){
			printf("+");
			}
				printf("\n");
}
}
int main(){

	
	printf( "\n dam el numero de filas: ");
    
        scanf( "%d", &filas );
    printf( "\n pon el numero de columnas: ");
    
        scanf( "%d", &columnas );
        
        fnHacerCuadro();
	
	return 0;
}
