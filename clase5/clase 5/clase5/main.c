#include <stdio_ext.h>
#include <stdlib.h>
#define CANTIDAD 5

int retornarTotal(int listadoDeNotas[],int tamano);
int retornarPromedio(int listadoDeNotas[],int tamano);
void cargarListado(int listadoDeNotas[],int tamano);
int numeroMayor(int listadoDeNotas[], int tamano);
int numeroMenor(int listadoDeNotas[], int tamano);
int cantidadDePares(int listadoDeNotas[], int tamano);
void mostrarInformacionDeLaArray(int listadoDeNotas[],int tamano);

int main()
{
    int listadoDeNotas[CANTIDAD];
    cargarListado(listadoDeNotas , CANTIDAD);
    mostrarInformacionDeLaArray(listadoDeNotas,CANTIDAD);

    return 0;
}

void mostrarInformacionDeLaArray(int listadoDeNotas[], int tamano){


    printf("\nEl numero mayor es %d",numeroMayor(listadoDeNotas,tamano));
    printf("\nEl numero menor es %d",numeroMenor(listadoDeNotas,tamano));
    printf("\nLa cantidad de pares es de %d", cantidadDePares(listadoDeNotas,tamano));
    printf("\nLa suma de todas las notas es %d", retornarTotal(listadoDeNotas,tamano));
    printf("\nEl promedio es %d", retornarPromedio(listadoDeNotas,tamano));

    //mostrar todo . mayor menor cantidad de pares, suma , promedio.

}
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


void cargarListado(int listadoDeNotas[],int tamano){
    int numeroIngresado;
    for(int i=0;i<tamano;i++){
        printf("ingrese una nota: ");
        scanf("%d", &numeroIngresado);

        listadoDeNotas[i]=numeroIngresado;

    }
}

