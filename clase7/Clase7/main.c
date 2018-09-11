#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
//sizeof lo que hace es dar la cantidad de bite que ocupa la variable , el SRTLEN es  la cantidad de caracteres que tiene.
//son diferentes


int main()
{



    char usuario[6];
    char clave[6];
    char auxUsuario[]="admin\n";
    char auxClave[]="admin\n";

    fgets(usuario,6,stdin);
    __fpurge(stdin);
    fgets(clave,6,stdin);
    __fpurge(stdin);

    int aux=strlen(usuario);
    printf("%d", aux);
/*
    if(strcmp(usuario , auxUsuario)==0  && strcmp(clave,auxClave)==0 ){
        printf("correcto bienvenido");
    }
    else{
        printf("incrrecto chau");
    }
*/

/*
    char nombre[5];
    char apellido[5];
    char localidad[5];
   // int tamano;

    fgets(nombre,5,stdin);
    __fpurge(stdin);

    fgets(apellido,5,stdin);
    __fpurge(stdin);

    fgets(localidad,5,stdin);

    //tamano=sizeof(nombre);
    printf("el nombre ingresado es : %s \ntu apellido es : %s \ntu localidad es: %s .",nombre,apellido,localidad);
*/
    return 0;
}
