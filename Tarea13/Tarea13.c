#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int n,n1, n2, opciones;

    do
    {
        printf( "\n 1. Suma.");
        printf( "\n 2. Resta");
        printf( "\n 3. Salir");
        printf( "\n\n   Introduzca opcion (1-3): ");
        scanf( "%d", &opciones);

        switch (opciones)
        {
            case 1:printf( "\n   Introduzca el primer numero (entero): " );
			    scanf( "%d", &n1 );
    			printf( "\n   Introduzca el segundo numero (entero): " );
			    scanf( "%d", &n2 );
			    printf( "\n   La suma es: %d", n1 + n2 );
                    break;

            case 2: printf( "\n   Introduzca el primer numero (entero): " );
			    scanf( "%d", &n1 );
    			printf( "\n   Introduzca el segundo numero (entero): " );
			    scanf( "%d", &n2 );
			    printf( "\n La resta es: %d",n1-n2);
                break;
         }
         
    } while ( opciones != 3 );
        return 0;
}
