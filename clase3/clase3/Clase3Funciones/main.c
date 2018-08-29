#include <stdio_ext.h>
#include <stdlib.h>
int pedirEdad();
int validarEdad(int edad,int minEdad,int maxEdad);
int main()
{
    int edad;
    edad=pedirEdad();
    printf("\n%d",edad);
    return 0;
}
int pedirEdad(){
    int retorno=0;
    int edad;
    int minEdad;
    int maxEdad;
    do{
        printf("ingrese el minimo de edad\n");
        scanf("%d",&minEdad);
        printf("ingrese el maximo de edad\n");
        scanf("%d",&maxEdad);
        system("clear");
        printf("Error , ingrese un minimo  y un maximo valido.\n\n");
    }while(minEdad<0 || maxEdad>100);
    do{
        __fpurge(stdin);
        printf("Ingrese su edad. ");
    }while(scanf("%d",&edad)!=1);
    retorno=validarEdad(edad,minEdad,maxEdad);
    return retorno ;
}
int validarEdad(int edad,int minEdad, int maxEdad){
    int retorno=1;
    if(edad<minEdad || edad > maxEdad){
        printf("la edad es incorrecta.");
        retorno=0;
    }else{
        printf("la edad es valida , tenes %d",edad);
    }
    return retorno;
}
