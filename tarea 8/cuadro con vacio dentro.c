#include <stdio.h>

int main(){
	
	int a=0;
	int b=0;
	
	for(a=1; a<=6; a=a+1){
		if(a==1){
			for(b=1; b<=6; b=b+1){
				printf("+");
			}
		}
		if(a>=2&&a<=5){
			for(b=1; b<=6; b=b+1){
				if(b==1){
					printf("+");
				}
				if(b>=2&&b<=5){
					printf(" ");
				}
				if(b==6){
					printf("+");
				}
			}
		}
		if(a==6){
			for(b=1; b<=6; b=b+1){
				printf("+");	
			}
		}
		printf("\n");
	}
	printf("\nFin");
}

