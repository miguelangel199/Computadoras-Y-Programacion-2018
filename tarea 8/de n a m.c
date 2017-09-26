#include <stdio.h>

int main(){

   int n=3;
   int m=6;
   int j=0;
   for(n=3; n<=m; n=n+1){
   		for(j=1; j<10; j=j+1){
   			printf("%d x %d = %d\n", n,j,n*j);
		   }
   	printf("_____");
   }
   printf("fin del programa");
}
