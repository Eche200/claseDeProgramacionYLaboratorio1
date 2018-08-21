#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int b;
    int c;
    printf("ingrese el primer numero: ");
    scanf("%i",&a);
    printf("ingrese el segundo numero: ");
    scanf("%i",&b);
    printf("ingrese el tercer numero: ");
    scanf("%i",&c);
    if(a>b && a<c){
        printf("el %i es el numero del medio.",a);
    }else if(b>a && b<c){
        printf("el %i es el numero del medio.",b);
    }else{
        printf("el %i es el numero del medio.",c);
    }
    return 0;
}
