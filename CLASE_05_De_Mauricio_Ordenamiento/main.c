#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"
#define CANTIDAD_EMPLEADOS 6
int main()
{
    int edades[CANTIDAD_EMPLEADOS]={2,3,6,8,7};
   /* int i;

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getEntero(&edades[i],2,"\nEdad?","\nEdad fuera de rango",0,200)==-1)
        {
            edades[i] = DATO_INVALIDO;
        }
    }*/

   // array_mostrarArray(edades,CANTIDAD_EMPLEADOS);
    array_ordenarMenorAMayor(edades,0,0,CANTIDAD_EMPLEADOS,1);

    return 0;
}


