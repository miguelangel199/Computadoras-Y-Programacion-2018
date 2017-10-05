#include<stdio.h>
#include <stdlib.h>

int main(){


	int a=0;
	int b=0;

	
	printf("este es el piedra papel o tijera.\n");
	
	printf("Aca va el orden:\nPiedra es '1' \nPapel es '2'\nTijeras son '3'\n");
	
	printf("jugador uno tira ");
		scanf("%d",&a);
	
	printf("ahora jugador 2 ");
		scanf("%d",&b); 
	
		if (a==b){
                    printf("\n\tEmpate\n");
                    }else
                    
                    if (a==1 && b==2) 
                    {
                                printf("\ngano el jugador ->2\n\n");
                                }
                   
					 if (a==3 && b==1)
                    {
                                printf("\ngano el jugador ->2\n\n");
                                }
					 if (a==2 && b==3)
                    {
                                printf("\ngano el jugador ->2\n\n");
                                }
                    
					 if (b==3 && a==1)
                    {
                                printf("\ngano el jugador ->1\n\n");
                                } 
					if (b==1 && a==2)
                    {
                                printf("\ngano el jugador ->2\n\n");
                                }
                    if (b==2 && a==3)
                    {
                                printf("\ngano el jugador ->1\n\n");
                                }
	
					
system("PAUSE");
return 0;
}
