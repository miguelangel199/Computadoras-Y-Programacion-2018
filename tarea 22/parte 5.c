#include <stdio.h>
#include <stdlib.h>
#include "info.h"
#define MAX 10
int main(int argc, char *argv[]) {
	appInfoData("ejemplo de punterosy arreglos","16/11/2016");
	int cals[MAX]={8,9,8,8,6,7,9,8,10,10};
	int *ptrCals;
	int j= 0;
	 ptrCals = cals;
	printf("elemento\t direccion \t valor\n");
	for(j=0; j<MAX; j++)
	printf("%d             \t%d \t %d\n",j,&cals[j], cals[j]);
	printf("-------------------------\n");
	printf("direccion a la que apunta: %d\n",ptrCals);
	printf("valor a la que apunta:%d\n",*ptrCals);
	ptrCals=ptrCals + 4;
	printf("direcion a la que apunta: %d\n",ptrCals);
	printf("valor a la que apunta: %d\n",*ptrCals);
	return 0;
}
