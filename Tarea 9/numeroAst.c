#include <stdio.h>
int main()
{
    int a,n;
    printf("ponga un numero para transformarlo en asteriscos: ");
    scanf("%d",&n);

    for(a=0; a< n; a++)
        printf("*");
}
