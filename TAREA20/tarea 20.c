#include<stdio.h>
#include <iva.h>
int main(){
      float a,suma;
    printf("\nEscriba el precio del producto: ");
      scanf("%f", &a);
      printf("\nel iva es :%f",sacar_el_iva(a));
      suma=total + a;
      printf("\nel total con todo y iva es :%f",suma);

}

