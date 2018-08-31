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

    int numero;
    if(utn_getNumero(&numero,"ingrese un numero","Error  , ingrese un numero correcto",0,100,3)==0){
        printf("el numero es %d",numero);
    }
    return 0;
}
// char* mensaje  es igual que  decirle que  va a recibir un STRING
