#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


#define CANTIDAD_EMPLEADOS 6

int main()
{
    char nombres[CANTIDAD_EMPLEADOS][50];
    int i;

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        utn_getNombre(nombres[i],50,"\nnombre: ","\nnombre incorrecto",2);

    }

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("\n%s",nombres[i]);

    }

    return 0;
}






