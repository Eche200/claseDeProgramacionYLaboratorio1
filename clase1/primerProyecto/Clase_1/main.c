#include <stdio_ext.h>
#include <stdlib.h>
int main()
{//3 5 2
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int  numeroMin;
    int numeroMax;
    printf("ingrese el primer numero: ");
    while(scanf("%i",&numeroUno)!=1){
        printf("error, ingrese el primer numero: ");
        __fpurge(stdin);
    }
    numeroMin=numeroUno;
    numeroMax=numeroUno;
    printf("ingrese el segundo numero: ");
    while(scanf("%i",&numeroDos)!=1){
        printf("error, ingrese el segundo numero: ");
        __fpurge(stdin);
    }
    if(numeroDos<numeroMin){
        numeroMin=numeroDos;
    }
    if(numeroDos>numeroMax){
        numeroMax=numeroDos;
    }
    printf("ingrese el tercer numero: ");
    while(scanf("%i",&numeroTres)!=1){
        printf("error, ingrese el tercer numero: ");
        __fpurge(stdin);
    }
    if(numeroTres<numeroMin){
        numeroMin=numeroTres;
    }
    if(numeroTres>numeroMax){
        numeroMax=numeroTres;
    }
    if((numeroUno>=numeroMin && numeroUno<=numeroMax) ){
        printf("el %i es el numero del medio.",numeroUno);
    }else if((numeroDos>=numeroMin && numeroDos<=numeroMax)){
        printf("el %i es el numero del medio.",numeroDos);
    }else if(numeroTres>=numeroMin && numeroTres<=numeroMax){
        printf("el %i es el numero del medio.",numeroTres);
    }
    else{
        printf("no hay numero del medio");
    }
    return 0;
}
