#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#define CANTIDAD_EMPLEADOS 6
#define DATO_INVALIDO -1
#define false 0
#define true 1


int array_initArray(int* pArray, int limite, int valor);
int array_calcularMaximoArray(int* pArray, int limite, int* pMaximo);
int array_mostrarArray(int* pArray, int limite);
int array_ordenarMenorAMayor(int* pArray, int* pMinimo, int desde, int limite, int orden);
int array_minimoDesde(int pArray[],int limite,int desde,int* pMinimo);

#endif
