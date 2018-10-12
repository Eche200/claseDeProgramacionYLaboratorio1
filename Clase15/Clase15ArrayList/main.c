#include <stdio.h>
#include <stdlib.h>

int* newArrayDinamica(int size);
int iniciarValores ( int* arrayIntDinamica, int size , int valor);
int mostrarArray ( int* arrayIntDinamica, int size);
int liberarMemoria ( int* arrayIntDinamica);
int* reSizeArray(int* arrayInt , int size);


int main()
{





    int* newArrayDinamica (int size)
    {
        int* retorno= NULL;
        int* auxInt= malloc(sizeof(int)*size);
        if(auxInt != NULL)
        {
            retorno= auxInt;
        }
        return retorno;
    }




    int iniciarValores (int* arrayIntDinamica, int size, int valor)
    {
        int retorno= -1;
        int i;
        if(arrayIntDinamica != NULL && size > 0)
        {

            for(i = 0 ; i < size ; i++ )
            {
                *(arrayIntDinamica+i) = valor;
            }
            retorno=0;
        }
        return retorno;
    }



    int mostrarArray (int* arrayIntDinamica, int size)
    {
        int retorno= -1;
        int i;

        if(arrayIntDinamica != NULL && size > 0)
        {
            for(i = 0 ; i < size ; i++ )
            {
                printf("%p - [%d] - %d\n", (arrayIntDinamica + i), i , *(arrayIntDinamica+1));
            }
            retorno=0;
        }
        return retorno;
    }



    int* reSizeArray(int* arrayInt , int size)
    {
        int* retorno = NULL;

        if(arrayInt != NULL && size >0)
        {
            retorno = realloc(arrayInt, size);
        }
        return retorno;
    }


    int* arrayEnteros=NULL;


    newArrayDinamica(100);


    iniciarValores(arrayEnteros,100 , 133);


    mostrarArray(arrayEnteros,100);

    free(arrayEnteros);




    return 0;
}
