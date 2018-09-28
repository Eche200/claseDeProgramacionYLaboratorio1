#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "Contrataciones.h"
#include "Funciones.h"
#include "Pantallas.h"
//int darDeBajaTodasLasPantallas(pantalla sPantallas)

int altaDePantalla (pantalla sPantalla[])
{
    int retorno = 0;
    //int i;
    if(sPantalla != NULL)
    {

        utn_getString(sPantalla[0].nombreDeLaPantalla,100);



    }


    return retorno;

}








int idPantallaAutoIncrementa()
{

    static int idPantallaIncrementa = 0;
    idPantallaIncrementa++;

    return idPantallaIncrementa;

}










/*
validaciones

ordenar por X factor , ordenar de mayor a menor o menor a mayor
*/
