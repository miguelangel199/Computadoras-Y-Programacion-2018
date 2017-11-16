#include <stdio.h>
#include <stdlib.h>
#include "info.h"
int main(int argc, char *argv[]) {
	appInfoData("ejemplo de punteros","16/11/2016");
	int a;
	a=10;
	int *puntero;
	puntero=&a;
	printf("%d\n",*puntero);
	printf("%d\n",puntero);
	printf("%d\n",a);
	printf("%d\n",&a);
	return 0;
}
