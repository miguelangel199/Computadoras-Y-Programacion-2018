#include <stdio.h>

main(){
int num;
printf("ingrese cualquier numero");
scanf("%d", &num);
if (num%2==0){
printf("%d es par",num);
}
else{
printf("%d es impar",num);
}
}
