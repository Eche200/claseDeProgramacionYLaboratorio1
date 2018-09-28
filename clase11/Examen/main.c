#include <stdio.h>
#include <stdlib.h>
#include "Pantallas.h"
#include "Contrataciones.h"
#include "Funciones.h"
int main()
{

    contratacion sContrataciones[1000];
    pantalla sPantallas[100];




    altaDePantalla(sPantallas);

    printf(sPantallas[0].nombreDeLaPantalla);



    return 0;
}
