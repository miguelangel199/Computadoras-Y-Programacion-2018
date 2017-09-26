#include <stdio.h>

int main(){

    int i,numero;
    
    printf( "\n ponga el numero 3: ");
    
        scanf( "%d", &numero );
        
        for ( i = 1 ; i <= 10 ; i++ ){
		
            printf( "\n   %d * %d = %d", i, numero, i * numero );
        }
}
