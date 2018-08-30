#include <stdio_ext.h>
#include <stdlib.h>
int getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int validarInt(int auxNumero,int min, int max);
int main()
{
    int numero;
    if(getNumero(&numero,"ingrese un numero","Error  , ingrese un numero correcto",0,100,3)==0){
        printf("el numero es %d",numero);
    }
    return 0;
}
// char* mensaje  es igual a decirle que  va a recibir un STRING
int getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos){
    int retorno=0;
    int auxNumero;
    do{
        __fpurge(stdin);
        printf("%s \n",mensaje);
        if(scanf("%d",&auxNumero)!=1 || validarInt(auxNumero,minimo,maximo)!=0){
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
            retorno=1;
        }
    }while(reintentos>0);
    return retorno;
}
int validarInt(int auxNumero,int min , int max){
    int retorno=0;
    if(auxNumero<min || auxNumero>max){
        retorno=1;
    }
    return retorno;
}
