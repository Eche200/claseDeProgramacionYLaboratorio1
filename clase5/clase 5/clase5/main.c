#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

#include "utn_funciones.h"
#define CANTIDAD 5

int main()
{
    int listadoDeNotas[CANTIDAD];
    cargarListado(listadoDeNotas , CANTIDAD);
    mostrarListado(listadoDeNotas,CANTIDAD);
    mostrarInformacionDeLaArray(listadoDeNotas,CANTIDAD);
    return 0;
}
