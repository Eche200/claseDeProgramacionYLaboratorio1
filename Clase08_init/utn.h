#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int isValidNombre(char* pBuffer);

int getString(char* pBuffer, int limite);

int utn_getNombre(  char* pNombre, int tamano, char* msg,
                    char* msgErr, int reintentos);


#endif // UTN_H_INCLUDED
