#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"


int array_mostrarArray(int* pArray, int limite)
{
    int i;
    for(i=0;i<limite;i++)
    {
        printf("\nIndex:%d - Value:%d - Add: %p",i,pArray[i],&pArray[i]);

    }
    return 0;
}

int array_calcularMaximoArray(int* pArray, int limite, int* pMaximo)
{
    int retorno=-1;
    int i;

    int maximo;
    int flagPrimerMaximo = false;

    if(pArray != NULL && limite > 0)
    {

        for(i=0;i<limite;i++)
        {
            if(pArray[i] != DATO_INVALIDO)
            {
                if(flagPrimerMaximo == false)
                {
                    maximo = pArray[i];
                    flagPrimerMaximo = true;
                }
                else if(pArray[i] > maximo)
                {
                    maximo = pArray[i];
                }
            }
        }

        if(flagPrimerMaximo == 0)
        {
            retorno = -2;
        }
        else
        {
            retorno = 0;
        }
    }
    return retorno;
}

int array_initArray(int* pArray, int limite, int valor)
{
    int retorno=-1;
    int i;
    if(pArray != NULL && limite > 0)
    {
        for(i=0;i<limite;i++)
        {
            pArray[i] = valor;
        }
        retorno = 0;
    }
    return retorno;
}
/*
int array_minimoDesde(int pArray[],int limite,int desde,int* pMinimo){
    int retorno=-1;
    int i;
    int auxValorMin;
    int auxInidiceMin;

    if(*pArray != NULL && limite > 0 && limite >=desde && pMinimo != NULL){

        for(i=desde;i<limite;i++){

            if(i==desde || *pArray[i] < auxMinimo){
                auxValorMin=*pArray[i];
                auxInidiceMin=i;
            }
        }
        retorno=auxInidiceMin;
    }
    return retorno;
}
*/

int array_ordenarMenorAMayor(int* pArray, int* pMinimo, int desde, int limite, int orden){
    int retorno=-1;
    int j;
    int i;
    int auxActual;
    int auxMinimo;
    if(pArray != NULL && limite > 0 && limite>=desde && pMinimo != NULL ){
        for(i=desde;i<limite;i++){


            auxActual=pArray[i];
            for(j=0;j>=0 && j<=limite;j++){
                if(j<auxActual){
                    auxMinimo=pArray[j];
                    pArray[i]=auxMinimo;
                    pArray[j]=auxActual;
                }
            }
        }
        retorno=0;
    }

    for(i=0;i<limite;i++){

        printf("%d",pArray[i]);

    }
    return retorno;
}
