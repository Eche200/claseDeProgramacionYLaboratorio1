#ifndef UTN_FUNCIONESGENERALES_H_INCLUDED
#define UTN_FUNCIONESGENERALES_H_INCLUDED

int utn_isValidNombre(char* pBuffer , int limite);

int utn_getString(char* pBuffer, int limite);

int utn_getNombre(char* pNombre,int tamano, char* msg,char* msgErr, int reintentos);

int getOnlyInt (char* palabra , int* arrayConvertidoAint);

#endif
