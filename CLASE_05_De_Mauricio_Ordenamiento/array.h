#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

#define CANTIDAD_EMPLEADOS 5
#define DATO_INVALIDO -1
#define false 0
#define true 1


int array_initArray(int* pArray, int limite, int valor);
int array_calcularMaximoArray(int* pArray, int limite, int* pMaximo);
int array_mostrarArray(int* pArray, int limite);



#endif
