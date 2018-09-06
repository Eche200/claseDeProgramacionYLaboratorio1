#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/*esto es  sentencias  d e pre  compilador  ,  lo que hace  es  dar   instrucciones  previas antes de  compilar
con la aprte d e ifndef  significa  que si  lo que sigue    no esta delcarado el define sin con ese nombre, entonces lo crea.
los DEFINE esos de arriba simepre llevan el mismo nombre que el archivo


*/
/**
    utn_getEntero : pide un entero al usuario
    @param pEdad: puntero a edad
    @param reintentos: cantidad de reintentos
    @return : 0 OK, -1 error.
*/
int utn_getEntero(int* pEdad,int reintentos,char* msg,
                          char*msgErr,int min, int max);


#endif // UTN_H_INCLUDED
