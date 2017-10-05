#include<stdio.h>
int main(){
      float precio, iva, total;
    printf("\nEscriba el precio del producto: ");
      scanf("%f", &precio);
      iva=precio*0.15;
      printf("\nEl iva del producto es :%f",iva);;
      total=precio+iva;
      printf("\nel total con todo y iva es :%f",total);
}
