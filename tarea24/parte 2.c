#include <stdio.h>
#include <conio.h>
struct registro{
	int cuenta;
	char nombre[30];
	int balance;
	
};
 typedef struct registro Cuenta;
int main() {
	
	FILE *cfPtr;
	Cuenta c;
	int j=0;
	if((cfPtr=fopen("cuenta5.txt","w"))==NULL){
		printf("no se abrio el acrchivo");
		
	}else{
		printf("dame la cuenta:");
		scanf("%d",&c.cuenta);
		
		printf("dame l nombre");
		fflush(stdin);
		gets(c.nombre);
		
		printf("dame el balance:");
		scanf("%d",&c.balance);
			for(j=0;j<10;j++){
				fprintf(cfPtr,"%d%s%d\n",c.cuenta,c.nombre,c.balance);
			}
	}
	
	fclose(cfPtr);
	getch();
	return 0;
}
