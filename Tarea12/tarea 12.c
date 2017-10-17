#include <stdio.h>
#include <stdlib.h>
   int main()
   {
    float num1=0;
    float num2=0;
    int num3=0;
    system("clear");
    printf("\nprograma que diga que numeros son iguales, cual es el mayo y cual es el menor\n");
    printf("Introduce el primer numero con punto decimal\n");
    scanf("%f",& num1);
    printf("Introduce el segundo numero con punto decimal\n");
    scanf("%f",& num2);
    printf("Introduce el tercer numero entero\n");
    scanf("%d",& num3);
	printf("\n%f es el numero 1",num1);
	printf("\n%f es el numero 2",num2);
	printf("\n%i es el numero 3",num3);
    {
        if(num1<num2 && num1<num3)
        {
            printf("\n%f es el menor",num1);
            printf("\n\nFin\n");
        }
        else
        {   
            if(num2<num1 && num2<num3)
            {
                printf("\n%f es menor",num2);
                printf("\n\nFIN\n");
            }
            else
            {   
                printf("\n%i es menor",num3);
                printf("\n\nFin\n");
            }
            	if(num1>=num2 && num1>num3)
            	{
            		printf("\n %f es el mayor",num1);
            		printf("\n\nFIN\n");
				}
				else
				{
					if(num2>=num1 && num2>num3)
					{
						printf("\n%f es mayor", num2 );
						printf("\n\nFIN\n\n");
					}
					else
					{
					printf("\n%i es mayor",num3);
                	printf("\n\nFin\n");
					}
				}
				if(num1==num2 && num1==num2)
            	{
            		printf("\n  son iguales el 1 y el 2");
            		printf("\n\nFIN\n");
				}
				else
				{
					if(num2==num3 && num2==num3)
					{
						printf("\n son iguales el 2 y 3");
						printf("\n\nFIN\n\n");
					}
					else
					{
						printf("\n no hay numeros iguales");
                		printf("\n\nFin\n");
					}
					}
				}
        }   

}

