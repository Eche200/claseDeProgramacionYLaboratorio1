#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"

/**
    utn_getNombre :
    @param
    @param
    @return
*/
int isValidNombre(char* pBuffer , int limite)
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

/**
    utn_getNombre :
    @param
    @param
    @return
*/
int getString(char* pBuffer, int limite)
{
    int retorno=1;
    char bufferStr[4900];
    int tamanoDelBuffer;
    if(pBuffer != NULL && limite > 0){
//fgets lee un archivo , le decimos  cuantos caracteres maximos puede tomar y por ultimo de donde
// cuando ponemos fgets luego de poner ejmeplo juan , fgets lee , fgets\n\0  , envez de juan\0 cuidado
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


/**
    utn_getNombre :
    @param
    @param
    @return
*/
int utn_getNombre(  char* pNombre,int tamano, char* msg,
                    char* msgErr, int reintentos)

{
    int retorno=-1;

    char bufferNombre[4900];
    if(pNombre != NULL && msg != NULL && msgErr != NULL && tamano > 0 && reintentos >=0){
        do{
            reintentos--;
            printf("%s",msg);
            if(getString(bufferNombre,tamano)==0 && isValidNombre(bufferNombre , tamano)==1){
//strncpy es la version que vamos  a usar para copiar
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




















