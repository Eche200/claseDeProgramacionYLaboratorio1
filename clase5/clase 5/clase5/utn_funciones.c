#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>



int cantidadDePares(int listadoDeNotas[], int tamano){
    int contadorDePares=0;
    for(int i=0;i<tamano;i++){
        if(listadoDeNotas[i]%2==0){
            contadorDePares++;
        }
    }
    return contadorDePares;
}
int numeroMayor(int listadoDeNotas[], int tamano){
    int numeroMayor;
    for(int i=0;i<tamano;i++){
        if(i==0 || listadoDeNotas[i]>numeroMayor){
            numeroMayor= listadoDeNotas[i];
        }
    }
    return numeroMayor;
}
int numeroMenor(int listadoDeNotas[], int tamano){
    int numeroMenor;
    for(int i=0;i<tamano;i++){
        if(i==0 || listadoDeNotas[i]<numeroMenor){
            numeroMenor= listadoDeNotas[i];
        }
    }
    return numeroMenor;
}
int retornarTotal(int listadoDeNotas[], int tamano){
    int sumaTotal=0;
    for(int i=0;i<tamano;i++){
        sumaTotal=sumaTotal+listadoDeNotas[i];
    }
    return sumaTotal;
}
int retornarPromedio(int listadoDeNotas[],int tamano){
    int suma;
    int promedio;
    suma=retornarTotal(listadoDeNotas,tamano);
    promedio=suma/tamano;
    return promedio;
}
void mostrarInformacionDeLaArray(int listadoDeNotas[],int tamano){
    for(int i= 0; i< tamano;i++){
        printf("\nEl elemento %d es : %d",i,listadoDeNotas[i]);
    }
}
void cargarListado(int listadoDeNotas[],int tamano){
    int numeroIngresado;
    for(int i=0;i<tamano;i++){
        printf("ingrese una nota: ");
        scanf("%d", &numeroIngresado);
        listadoDeNotas[i]=numeroIngresado;
    }
}
void mostrarListado(int listadoDeNotas[], int tamano){
    printf("\nEl numero mayor es %d",numeroMayor(listadoDeNotas,tamano));
    printf("\nEl numero menor es %d",numeroMenor(listadoDeNotas,tamano));
    printf("\nLa cantidad de pares es de %d", cantidadDePares(listadoDeNotas,tamano));
    printf("\nLa suma de todas las notas es %d", retornarTotal(listadoDeNotas,tamano));
    printf("\nEl promedio es %d", retornarPromedio(listadoDeNotas,tamano));
}
char * evaluarDesempeno(int listadoDeNotas[], int tamano){
    int aprobado=0;
    int desaprobado=0;
    int seVaAFinal=0;
    char retorno[100];
    for(int i=0;i<tamano;i++){

        if(listadoDeNotas[i]>=6){
            aprobado++;
        }else if(listadoDeNotas[i]>=4 &&listadoDeNotas[i]<=5){
            seVaAFinal++;
        }else if(listadoDeNotas[i]>=1 && listadoDeNotas[i]<=3){
            desaprobado++;
        }
    }
    strcpy(retorno,"%d alumnos aprobaron , %d  alumnos se van a final y %d alumnos desaprobaron.",aprobado,desaprobado,seVaAFinal);/*
    retorno=;
*/
    return *retorno;
}


//apbado6 a 10 , desaprobado 1 a 3, final 4 a 5
