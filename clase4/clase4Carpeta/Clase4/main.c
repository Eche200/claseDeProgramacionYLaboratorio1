#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

/**
*\brief es una explicacion que  hace la funcion
*\param se hace 1 por cada parametro de la funcion  y explicamos el sentido que tiene en la funcion
*\return  lo que nos retorna
*/
int main()
{
    /*
    int numeroIngresado;
    if(utn_getNumero(&numeroIngresado,"ingrese un numero","Error  , ingrese un numero correcto",0,100,3)==0){
        printf("el numeroIngresado es %d",numeroIngresado);
    }
    */
/*
    char letraIngresada;
    if(utn_getChar(&letraIngresada,"ingrese una letra","Error  , ingrese una letra correcta",'a','j',3)==0){
        printf("el letraIngresada es %c",letraIngresada);
    }

*/

    float numeroFloatIngresado;
    if(utn_getFloat(&numeroFloatIngresado,"ingrese un numero de punto flotante","Error  , ingrese una letra correcta",3.5,8.3,3)==0){
        printf("el numeroFloatIngresado es %.2f",numeroFloatIngresado);
    }


    return 0;
}
// char* mensaje  es igual que  decirle que  va a recibir un STRING
