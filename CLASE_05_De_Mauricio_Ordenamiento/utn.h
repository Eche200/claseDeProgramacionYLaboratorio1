#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

/*esto es  sentencias  d e pre  compilador  ,  lo que hace  es  dar   instrucciones  previas antes de  compilar



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
