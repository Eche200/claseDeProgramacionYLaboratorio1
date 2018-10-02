#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "UTN_ArrayEmployees.h"
#include "Funciones.h"

/*
necesito un array , luego la variable i es para el iterador que recorre el array
luego pos es para  guardar la posicion actual , y aux para guardar el numero mayor
y hacer el intercambio
*/

int Func_ordenamientoPorInsercionParaInt(Employee arrayDeEmployee[], int limite ,int indice)
{
    int retorno = -1;
    int i;
    int posicion;
    int auxDeid;
    for(i = indice ; i < limite ; i++)
    {
        //guardamos la posicion en i la que estamos actualmente
        posicion = i;
        //guardamos el elemento que esta en es posicion. sea int o char o lo que sea
        auxDeid = arrayDeEmployee[i].id;
        // si el numero (en este caso) actual es menor al de su izquierda , se cambia
        // si la posicion es mayor a 0 tambien , entonces se crea el intercambio.
        while(posicion > 0 && auxDeid < arrayDeEmployee[posicion - 1].id)
        {
            arrayDeEmployee[posicion].id = arrayDeEmployee[posicion - 1].id;
            posicion--;
        }
        arrayDeEmployee[posicion].id = auxDeid;
    }
    return retorno;
}


int Func_ordenamientoPorInsercionParaChar(Employee arrayDeEmployee[], int limite , int indice)
{
    int retorno = 0;
    int i;
    char auxDeNombreDelEmployee[51];
    int posicion;
    for ( i = indice ; i < limite ; i++)
    {
        posicion = i;
        strncpy(auxDeNombreDelEmployee , arrayDeEmployee[i].nombre , CANTIADDECARACTERESMAXIMOSPARANOMBRE);
        while( i > 0 && strcmp(auxDeNombreDelEmployee, arrayDeEmployee[posicion - 1].nombre)<0)
        {
            strncpy(arrayDeEmployee[posicion].nombre , arrayDeEmployee[posicion - 1].nombre, 51);
            posicion--;
        }
        strncpy(arrayDeEmployee[posicion].nombre,auxDeNombreDelEmployee,CANTIADDECARACTERESMAXIMOSPARANOMBRE);
    }
    return retorno;
}




int Func_ordenamientoPorInsercionPorDosCriterios(Employee arrayDeEmployee[], int limite , int indice)
{
    int retorno = 0;
    int i;
    char auxDeNombreDelEmployee[51];
    int posicion;
    for ( i = indice ; i < limite ; i++)
    {
        posicion = i;
        strncpy(auxDeNombreDelEmployee, arrayDeEmployee[i].nombre , CANTIADDECARACTERESMAXIMOSPARANOMBRE);
        while( i > 0 && strcmp(auxDeNombreDelEmployee, arrayDeEmployee[posicion - 1].nombre)<0)
        {
            strncpy(arrayDeEmployee[posicion].nombre , arrayDeEmployee[posicion - 1].nombre, 51);

            if(strcmp(auxDeNombreDelEmployee, arrayDeEmployee[posicion - 1].nombre) == 0)
            {
                while(arrayDeEmployee[posicion].sueldo < arrayDeEmployee[posicion - 1].sueldo && strcmp(auxDeNombreDelEmployee , arrayDeEmployee[posicion - 1].nombre) == 0 )
                {
                    strncpy(arrayDeEmployee[posicion].nombre , arrayDeEmployee[posicion - 1].nombre, 51);
                    posicion--;
                }
            }

        }
        strncpy(arrayDeEmployee[posicion].nombre,auxDeNombreDelEmployee,CANTIADDECARACTERESMAXIMOSPARANOMBRE);
    }
    return retorno;
}





// tomo por teclado y lo hago que este bien con espacios de mas y lo guarada en una auxiliar
int utn_getString(char* pBuffer, int limite)
{
    int retorno=-1;
    char bufferStr[4900];
    int tamanoDelBuffer;
    if(pBuffer != NULL && limite > 0){
        __fpurge(stdin);
        fgets(bufferStr,limite,stdin);
        tamanoDelBuffer=strlen(bufferStr);
        if(tamanoDelBuffer != limite - 1 || bufferStr[limite - 2] == '\n'){
            bufferStr[tamanoDelBuffer-1]= '\0';
        }
        strncpy(pBuffer,bufferStr,limite);
        retorno=0;
    }
    return retorno;
}

// toma un auxiliar y evalua si es  solo palabras
int utn_isValidNombre(char* pBuffer , int limite)
{
    int retorno=0;
    int i;
    if(pBuffer != NULL && limite > 0){
        retorno=1;
        for(i=0;i<limite && pBuffer[i]!= '\0';i++){
            if(tolower(pBuffer[i])<'a' || tolower(pBuffer[i])>'z'){
                retorno=0;
                break;
            }
        }
    }
    return retorno;
}

// pregunta que si esta bien lo que tomo , y si son solo palabras y de ahi guarda en el lugar original que queremos
int utn_getNombre(  char* pNombre,int tamano, char* msg,
                    char* msgErr, int reintentos)

{
    int retorno=-1;

    char bufferNombre[4900];
    if(pNombre != NULL && msg != NULL && msgErr != NULL && tamano > 0 && reintentos >=0){
        do{
            reintentos--;
            printf("%s",msg);
            if(utn_getString(bufferNombre,tamano)==0 && utn_isValidNombre(bufferNombre , tamano)==1){
                strncpy(pNombre,bufferNombre,tamano);
                retorno=0;
                break;
            }else{
                printf("%s",msgErr);
            }
        }while(reintentos>0);
    }
    return retorno;
}




int utn_isValidInt(char* pBuffer , int limite)
{
    int retorno=0;
    int i;
    if(pBuffer != NULL && limite > 0){
        retorno=1;
        for( i = 0 ; i < limite && pBuffer[i] != '\0'; i++){
            if(pBuffer[i] < '0' || pBuffer[i] > '9'){
                retorno=0;
                break;
            }
        }
    }
    return retorno;
}


int utn_isValidFloat(char* pBuffer , int limite)
{
    int retorno = 0;
    int i;
    int contadorDeComas = 0;
    if(pBuffer != NULL && limite > 0)
    {
        retorno=1;
        for( i = 0 ; i < limite && pBuffer[i] != '\0'; i++)
        {
            if(pBuffer[i] < '0' || pBuffer[i] > '9' || pBuffer[i] != ',')
            {
                retorno = 0;
                break;
            }
            else if( pBuffer[i] == ',')
            {
                contadorDeComas++;
                if(contadorDeComas > 1 )
                {
                    retorno = 0;
                    break;
                }
            }
        }
        if(contadorDeComas < 1)
        {
            retorno = 0;
        }
    }
    return retorno;
}



int utn_getInt(  int* pEntero,int tamano, char* msg,
                    char* msgErr, int reintentos)

{
    int retorno=-1;

    char bufferInt[4900];
    if(pEntero != NULL && msg != NULL && msgErr != NULL && tamano > 0 && reintentos >=0)
    {
        do
        {
            reintentos--;
            printf("%s",msg);
            if(utn_getString(bufferInt,tamano)==0 && utn_isValidInt(bufferInt , tamano)==1)
            {
                *pEntero = atoi(bufferInt);
                retorno=0;
                break;
            }else
            {
                printf("%s",msgErr);
            }
        }while(reintentos>0);
    }
    return retorno;
}




int utn_getFloat(  float* pFloat,int tamano, char* msg,
                    char* msgErr, int reintentos)

{
    int retorno=-1;

    char bufferFloat[4900];
    if(pFloat != NULL && msg != NULL && msgErr != NULL && tamano > 0 && reintentos >=0)
    {
        do
        {
            reintentos--;
            printf("%s",msg);
            if(utn_getString(bufferFloat,tamano)==0 && utn_isValidInt(bufferFloat , tamano)==1)
            {
                *pFloat = atof(bufferFloat);
                retorno=0;
                break;
            }else
            {
                printf("%s",msgErr);
            }
        }while(reintentos>0);
    }
    return retorno;
}

