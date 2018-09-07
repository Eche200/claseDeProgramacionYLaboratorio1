#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
#include "array.h"

#define CANTIDAD_EMPLEADOS 6

int main()
{


   /* int edades[CANTIDAD_EMPLEADOS] = {50,10,30,1,10,22};


    int i;
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getEntero(&edades[i],2,"\nEdad?","\nEdad fuera de rango",0,200)==-1)
        {
            edades[i] = DATO_INVALIDO;
        }
    }

    array_ordenar(edades,CANTIDAD_EMPLEADOS,0);
    array_mostrar(edades,CANTIDAD_EMPLEADOS);
*/


    //nunca vamos a  usar strcpy();
    //strncpy(); nos va a pedir , el destino , el origen , y la cantidad de caracteres
    char nombre[4];
    char buffer[4097];
    int cantidad;
    scanf("%s", buffer);
    cantidad=strlen(buffer);

    strncpy(nombre,buffer,4);
    printf("%s",nombre);

    return 0;
}






