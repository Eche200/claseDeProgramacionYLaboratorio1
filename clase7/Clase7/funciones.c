#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getOnlyInt (char* palabra , int* arrayConvertidoAint){
    int retorno=0;
    char auxPalabra[100];
    int i;
    strcpy(auxPalabra , palabra);
    int largo= strlen(auxPalabra);
    for(i=0; i <= largo-1 ; i++ ) {
        if((auxPalabra[i]>='a' && auxPalabra[i]<='z')||(auxPalabra[i]>='A' && auxPalabra[i]<='Z')){
            retorno=1;
            printf("no son numeros, hay letras en estos caracteres.");
            break;
        }else{
            if(i == largo-1){
                printf("todos son caracteres, se pudo  transformar la cadena correctamente \n");
                *arrayConvertidoAint=atoi(auxPalabra);
            }
        }
    }
    return retorno;
}



int getOnlyLetters (char* palabra ){
    int retorno=0;
    int i;
    int largo= strlen(palabra);
    for(i=0; i <= largo-1 ; i++ ) {
        if((palabra[i]>='0' && palabra[i]<='9')){
            retorno=1;
            printf("no son solo letras , hay numeros en estos caracteres.");
            break;
        }else if ((palabra[i]>='a' && palabra[i]<='z') || (palabra[i]>='A' && palabra[i]<='Z')){
            if(i == largo-1){
                printf("todos son caracteres.\n");
            }
        }
        else{
            retorno=1;
            printf("no son solo letras, hay numeros en estos caracteres.");
            break;
        }
    }
    return retorno;
}

char* getChar(char* nombre){
    char auxNombre[26];
    int i;
    fgets(auxNombre,26,stdin);
    int largo=strlen(auxNombre);
    char auxDeAuxNombre[largo];
    strcpy(auxDeAuxNombre,auxNombre);
    for(i=0 ; i < largo-1 ; i++){
        if(auxDeAuxNombre[i] >= 'a' && auxDeAuxNombre[i] <= 'z'){

            strcpy(nombre,auxDeAuxNombre);
            break;
        }
    }

    return nombre;
}
