#include <stdio.h>
#include <stdlib.h>
int main()
{//3 5 2
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int  numeroMin;
    int numeroMax;
    printf("ingrese el primer numero: ");
    scanf("%i",&numeroUno);
    numeroMin=numeroUno;
    numeroMax=numeroUno;
    printf("ingrese el segundo numero: ");
    scanf("%i",&numeroDos);
    if(numeroDos<numeroMin){
        numeroMin=numeroDos;
    }
    if(numeroDos>numeroMax){
        numeroMax=numeroDos;
    }

    printf("ingrese el tercer numero: ");
    scanf("%i",&numeroTres);

    if(numeroTres<numeroMin){
        numeroMin=numeroTres;
    }
    if(numeroTres>numeroMax){
        numeroMax=numeroTres;
    }


    printf("\n%i",numeroMax);
    printf("\n%i\n",numeroMin);


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
