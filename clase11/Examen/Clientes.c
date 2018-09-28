#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "Pantallas.h"
#include "Contrataciones.h"
#include "Funciones.h"
#include "Clientes.h"





/*


int cliente_inicializarArray(
{
    int retorno=-1;
    int i;
    int idClienteContador = 0;
    if(pCliente != NULL && limiteClientes > 0 && pContratacion != NULL && limiteDeContrataciones >0){

        for(i=0;i<limiteClientes;i++) {

            pClientes[i].isEmpty =1;

        }
        for(i=0;i<limiteDeContrataciones;i++){

            if(getClienteByCuit(pCliente,limiteCliente,Contrataciones[i].cuit)!= NULL){
                strncpy(pCliente[idCliente].cuit,Contrataciones[i].cuit , 10);
                pCliente[idCliente].isEmpty= 0;
                pCliente[idCliente].idCliente = getNextId();
                idClienteContador ++;

            }
            retorno = 0;
        }


    }



    return retorno;
}

*/




/*
Cliente* getClientePorCuit(cliente* pCliente,int limite, char* cuit){


Clente* retorno= NULL;
int i;

for(i=0;i<limite;i++){
if(!strcmp(cuit,pCliente[i].cuit)){
retorno = &pCliente[i];
break;
}
}
return retorno;
}
*/
