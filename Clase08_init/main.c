#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


#define CANTIDAD_EMPLEADOS 3

struct sEmpleado{
    char nombre[51];
    char apellido[51];
    float salario;
};
//typedef lo que hace  es poder  cambiarle el nombre de  un struct existente , darle otro nombre.

typedef struct sEmpleado Empleado;
/*
es lo mismo que lo que hicimos arriba

typedef struct sEmpleado{
    char nombre[51];
    char apellido[51];
    float salario;
}Empleado;
*/


void ordenarPorNombre(char pNombres[][50], char pApellidos[][50], char pDni[][50],int limite);
int main()
{
    char nombres[CANTIDAD_EMPLEADOS][50]={"aaa", "ccc", "bbb"};
    char apellido[CANTIDAD_EMPLEADOS][50]={"aaa", "ccc", "bbb"};
    char dni[CANTIDAD_EMPLEADOS][50]={"aaa", "ccc", "bbb"};

    int i;

    ordenarPorNombre(nombres,apellido,dni,CANTIDAD_EMPLEADOS);
    /*for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        utn_getNombre(nombres[i],50,"\nnombre: ","\nnombre incorrecto",2);
    }*/


    /*array_ordenarMenorAMayor(nombres,0,CANTIDAD_EMPLEADOS,0);*/

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("\n%s , %s , %s \n\n",nombres[i],apellido[i],dni[i]);

    }
    return 0;
}
/*void array_ordenarMenorAMayor(char* pArray , int desde, int limite, int orden){

    int j;
    int i;
    char auxActual[50];
    char auxMinimo[50];
    if(pArray != NULL && limite > 0 && limite>=desde  ){
        for(i=desde;i<limite-1;i++){
            strncpy(auxActual,pArray[i],50);
            for(j=0;j>=0 && j<limite-1;j++){
                if(orden==0){
                    if(strcmp(pArray[j],auxActual)<0){
                        strncpy(auxMinimo,pArray[j],50);
                        strncpy(pArray[i],auxMinimo,50);
                        strncpy(pArray[j],auxActual,50);
                    }
                }else if(orden==1){
                    if(strcmp(pArray[j],auxActual)>0){
                        strncpy(auxMinimo,pArray[j],50);
                        strncpy(pArray[i],auxMinimo,50);
                        strncpy(pArray[j],auxActual,50);
                    }
                }
            }
        }

    }

    for(i=0;i<limite;i++){

        printf("%d",pArray[i]);

    }

}*/


//cuando le damos un array tipo q tiene cantidad y limite de caracteres , char miArray[5][50]; debo
//pasarle el segundo si o si.
void ordenarPorNombre(char pNombres[][50], char pApellidos[][50], char pDni[][50],int limite){
    int swap;
    int i;
    char bufferStr[500];
    do{
        swap=0;
        for(i=0;i<limite-1;i++){
            if(strcmp(pNombres[i], pNombres[i+1])>0){
                strcpy(bufferStr,pNombres[i]);
                strcpy(pNombres[i],pNombres[i+1]);
                strcpy(pNombres[i+1],bufferStr);
                strcpy(bufferStr,pApellidos[i]);
                strcpy(pApellidos[i],pApellidos[i+1]);
                strcpy(pApellidos[i+1],bufferStr);
                strcpy(bufferStr,pDni[i]);
                strcpy(pDni[i],pDni[i+1]);
                strcpy(pDni[i+1],bufferStr);
            }
        }
    }while(swap);
}



