#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED
#include "Pantallas.h"
#include "Contrataciones.h"
#include "Funciones.h"

typedef struct clientes{

    int idCliente;
    char nombre[100];
    char apellido[100];
    char cuit[10];
    int isEmpty;


}cliente;

#endif // CLIENTES_H_INCLUDED
