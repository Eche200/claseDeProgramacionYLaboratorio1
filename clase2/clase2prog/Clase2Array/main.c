#include <stdio_ext.h>
#include <stdlib.h>
#define TAM 3
int main()
{//3 5 2
    int numero[TAM];
    int numeroMin;
    int numeroMax;
    int numeroMed;
    for(int i=0;i<3;i++){
        printf("ingrese un numero: ");
        while(scanf("%i",&numero[i])!=1){
            printf("error, ingrese el primer numero: ");
            __fpurge(stdin);
        }
        if(i==0){
            numeroMin=numero[i];
            numeroMax=numero[i];
        }
        if(numero[i]<numeroMin){
            numeroMin=numero[i];
        }
        if(numero[i]>numeroMax){
            numeroMax=numero[1];
        }
    }
    for(int i=0;i<3;i++){
        if((numero[i]>=numeroMin && numero[i]<=numeroMax) ){
            numeroMed=numero[i];
        }
    }
    printf("el %i es el numero del medio.",numeroMed);
    return 0;
}
