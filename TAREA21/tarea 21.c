#include <stdio.h>
#include "nopmbre.h"
char m,i,e,g,u,e,l,fecha,tarea;
int main() 
{
	printf("dale enter m");
	scanf("%c",&m);
	printf("\nla primera es la letra %c",fnletra_m(m));
		printf("enter i");
	scanf("%c",&i);
	printf("\nla segunda es la letra %c",fnletra_i(i));
	
		printf("enter g");
	scanf("%c",&g);
	printf("\nla tercera es la letra %c",fnletra_g(g));
	
		printf("enter u");
	scanf("%c",&u);
	printf("\nla cuarta es la letra %c",fnletra_u(u));
	
		printf("enter e");
	scanf("%c",&e);
	printf("\nla quinta es la letra %c",fnletra_e(e));
	
		printf("enter l");
	scanf("%c",&l);
	printf("\nla sexta es la letra %c",fnletra_l(l));
	
	printf("%s",presentacion(tarea,fecha));
	
}
