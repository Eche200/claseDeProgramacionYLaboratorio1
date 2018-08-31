#include <stdio_ext.h>
#include <stdlib.h>
int utn_validarInt(int auxNumero,int min , int max){
    int retorno=0;
    if(auxNumero<min || auxNumero>max){
        retorno=-1;
    }
    return retorno;
}
int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos){
    int retorno=0;
    int auxNumero;
    do{
        __fpurge(stdin);
        printf("%s \n",mensaje);
        if(scanf("%d",&auxNumero)!=1 || utn_validarInt(auxNumero,minimo,maximo)!=0){
            system("clear");
            printf("%s\n",mensajeError);
            reintentos--;
        }else{
            *pResultado=auxNumero;
            break;
        }
        if(reintentos==0){
            system("clear");
            printf("Pasaste el limite de intentos, ADIOS.");
            retorno=-1;
        }
    }while(reintentos>0);
    return retorno;
}


//getChar , getFloat


int utn_validarChar(char auxDeLetra,char min , char max){
    int retorno=0;
    if(auxDeLetra<min || auxDeLetra>max){
        retorno=-1;
    }
    return retorno;
}

int utn_getChar(char* pLetra,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos){
    int retorno=0;
    char auxDeLetra;
    do{
        __fpurge(stdin);
        printf("%s \n",mensaje);
        if(scanf("%c",&auxDeLetra)!=1 || utn_validarInt(auxDeLetra,minimo,maximo)!=0){
            system("clear");
            printf("%s\n",mensajeError);
            reintentos--;
        }else{
            *pLetra=auxDeLetra;
            break;
        }
        if(reintentos==0){
            system("clear");
            printf("Pasaste el limite de intentos, ADIOS.");
            retorno=-1;
        }
    }while(reintentos>0);
    return retorno;
}





int utn_validarFloat(float auxDeFloat,float min , float max){
    float retorno=0;
    if(auxDeFloat<min || auxDeFloat>max){
        retorno=-1;
    }
    return retorno;
}
int utn_getFloat(float* pNumeroFlotante,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos){
    int retorno=0;
    float auxDeFloat;
    do{
        __fpurge(stdin);
        printf("%s \n",mensaje);
        if(scanf("%f",&auxDeFloat)!=1 || utn_validarFloat(auxDeFloat,minimo,maximo)!=0){
            system("clear");
            printf("%s\n",mensajeError);
            reintentos--;
        }else{
            *pNumeroFlotante=auxDeFloat;
            break;
        }
        if(reintentos==0){
            system("clear");
            printf("Pasaste el limite de intentos, ADIOS.");
            retorno=-1;
        }
    }while(reintentos>0);
    return retorno;
}

static int getInt(int* numeroIngresado){
    return scanf("%d",&numeroIngresado);
}
static int getChar(char* letraIngresada){
    return scanf("%c",&letraIngresada);
}

static int getFloat(float* numeroConComaIngresado){
    return scanf("%f",&numeroConComaIngresado);
}

static int getString(char* stringIngresado){
    return scanf("%s",stringIngresado);
}




