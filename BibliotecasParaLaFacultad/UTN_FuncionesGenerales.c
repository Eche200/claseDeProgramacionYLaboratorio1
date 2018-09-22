#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
    @brief utn_isValidNombre
    @param
    @param
    @return
*/
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



/**
    @brief utn_getString
    @param
    @param
    @return
*/
int utn_getString(char* pBuffer, int limite)
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
    @brief utn_getNombre :
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
            if(utn_getString(bufferNombre,tamano)==0 && utn_isValidNombre(bufferNombre , tamano)==1){
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



int getOnlyInt (char* palabra , int* arrayConvertidoAint)
{
    int retorno=0;
    char auxPalabra[100];
    int i;
    strcpy(auxPalabra , palabra);
    int largo= strlen(auxPalabra);
    for(i=0; i <= largo-1 ; i++ )
        {
        if((auxPalabra[i]>='a' && auxPalabra[i]<='z')||(auxPalabra[i]>='A' && auxPalabra[i]<='Z'))
        {
            retorno=1;
            printf("no son numeros, hay letras en estos caracteres.");
            break;
        }else
        {
            if(i == largo-1)
            {
                printf("todos son caracteres, se pudo  transformar la cadena correctamente \n");
                *arrayConvertidoAint=atoi(auxPalabra);
            }
        }
    }
    return retorno;
}



