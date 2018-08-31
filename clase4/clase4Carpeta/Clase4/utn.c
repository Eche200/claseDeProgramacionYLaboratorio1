#include <stdio_ext.h>
#include <stdlib.h>


/**
*\brief le paso por parametro un  numero que tome con la funcion getNumero y verifico si es un numero valido.
*\param auxNumero , es el numero a evaluar si es correcto.
*\param min , es el numero minimo que aceptamos como parametro
*\param max , es el numero maximo que  acpetamos como parametro
*\return retorna 0 si esta todo bien , -1 si hubo error
*/
int utn_validarInt(int auxNumero,int min , int max){
    int retorno=0;
    if(auxNumero<min || auxNumero>max){
        retorno=-1;
    }
    return retorno;
}
/**
*\brief toma un numero , verifica si es un numero y si es valido , si no es valido  tiene 3 intentos  y sale de la funcion.
*\param pResultado , es un puntero a una variable .
*\param mensaje, mensaje para  indicar que debe ingresar  un numero.
*\param mensajeError , es el mensaje  que aparece i hay un error.
*\param minimo, es el  minimo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param max , es el  maximo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param reintentos , es  el numero de intentos que va a tener  el usuario para equivocarnos.
*\return retorna 0 si esta todo bien , -1 si hubo error.
*/
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
/**
*\brief le paso por parametro una  letra que tome con la funcion getLetra y verifico si es una letra valido.
*\param auxLetra , es la letra a evaluar si es correcta.
*\param min , es la letra minima que aceptamos como parametro
*\param max , es la letra maxima que  acpetamos como parametro
*\return retorna 0 si esta todo bien , -1 si hubo error
*/
int utn_validarChar(char auxDeLetra,char min , char max){
    int retorno=0;
    if(auxDeLetra<min || auxDeLetra>max){
        retorno=-1;
    }
    return retorno;
}
/**
*\brief toma una letra , verifica si es una letra y si es valida , si no es valida tiene 3 intentos  y sale de la funcion.
*\param pLetra , es un puntero a una variable . //seguir aca
*\param mensaje, mensaje para  indicar que debe ingresar  un numero.
*\param mensajeError , es el mensaje  que aparece i hay un error.
*\param minimo, es el  minimo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param max , es el  maximo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param reintentos , es  el numero de intentos que va a tener  el usuario para equivocarnos.
*\return retorna 0 si esta todo bien , -1 si hubo error.
*/
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
    return scanf("%d",numeroIngresado);
}
static int getChar(char* letraIngresada){
    return scanf("%c",letraIngresada);
}

static int getFloat(float* numeroConComaIngresado){
    return scanf("%f",numeroConComaIngresado);
}

static int getString(char* stringIngresado){
    return scanf("%s",stringIngresado);
}




