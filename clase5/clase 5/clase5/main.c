#include <stdio_ext.h>
#include <stdlib.h>
#define CANTIDAD 5
int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_validarInt(int auxNumero,int min , int max);
int main()
{
    int listadoDeNotas[CANTIDAD];
    int numeroIngresado;



/*printf("%d",sizeof(numeroIngresado));
    printf("\n%d",sizeof(listadoDeNotas));
    printf("\n%d",&numeroIngresado);
    printf("\n%d",listadoDeNotas);

    for(int i=0;i<5;i++){
        printf("\n direccion:  %d", &listadoDeNotas[i]);

    }*/

    for(int i=0;i<CANTIDAD;i++){

        printf("\n Ingrese nota: ");
        scanf("%d", &numeroIngresado);

        listadoDeNotas[i]=numeroIngresado;

    }
    for(int i=0;i<CANTIDAD;i++){

        printf("\n la nota es: %d",listadoDeNotas[i]);
    }


    return 0;
}

int utn_validarInt(int auxNumero,int min , int max){
    int retorno=0;
    if(auxNumero<=min || auxNumero>=max){
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
            system("clear");
            break;
        }
        if(reintentos==0){
            system("clear");
            printf("Pasaste el limite de intentos.Te devolveremos al menu para que elegir otra operacion.\n\n");
            retorno=-1;
        }
    }while(reintentos>0);
    return retorno;
}

