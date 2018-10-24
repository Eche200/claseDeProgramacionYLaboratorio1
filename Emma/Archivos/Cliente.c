#include "Cliente.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Cliente* Cliente_new()
{
    Cliente* this;
    this=malloc(sizeof(Cliente));
    return this;
}

void Cliente_delete(Cliente* this)
{
    free(this);
}

Cliente* Cliente_newConParametros(char* nombre,char* apellido,	int isEmpty,	int id)
{
    Cliente* this;
    this=Cliente_new();

    if(
        !Cliente_setNombre(this,nombre)&&
        !Cliente_setApellido(this,apellido)&&
        !Cliente_setIsEmpty(this,isEmpty)&&
        !Cliente_setId(this,id))
        return this;

    Cliente_delete(this);
    return NULL;
}

int Cliente_setNombre(Cliente* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=0;
    }
    return retorno;
}

int Cliente_getNombre(Cliente* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        retorno=0;
    }
    return retorno;
}

int Cliente_setApellido(Cliente* this,char* apellido)
{
    int retorno=-1;
    if(this!=NULL && apellido!=NULL)
    {
        strcpy(this->apellido,apellido);
        retorno=0;
    }
    return retorno;
}

int Cliente_getApellido(Cliente* this,char* apellido)
{
    int retorno=-1;
    if(this!=NULL && apellido!=NULL)
    {
        strcpy(apellido,this->apellido);
        retorno=0;
    }
    return retorno;
}

int Cliente_setIsEmpty(Cliente* this,	int isEmpty)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->isEmpty=isEmpty;
        retorno=0;
    }
    return retorno;
}

int Cliente_getIsEmpty(Cliente* this,	int* isEmpty)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *isEmpty=this->isEmpty;
        retorno=0;
    }
    return retorno;
}

int Cliente_setId(Cliente* this,	int id)
{
    int retorno=-1;
    static int proximoId=-1;

    if(this!=NULL && id==-1)
    {
        proximoId++;
        this->id=proximoId;
        retorno=0;
    }
    else if(id>proximoId)
    {
        proximoId=id;
        this->id=proximoId;
        retorno=0;
    }
    return retorno;
}

int Cliente_getId(Cliente* this,	int* id)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *id=this->id;
        retorno=0;
    }
    return retorno;
}

//crear un new con parametros , y  lo que devuelve  que e s un  puntero a void , agregarlo a  un array de punteros

//debo ver esto cambiar  tipos d e datos
void* Cliente_newConParametrosArchvos(char* nombre,char* apellido,	char* isEmpty,	char* id)
{
    FILE* pArchivo;
    char bufferId[4900];
    char bufferNombre[4900];
    char bufferApellido[4900];
    char bufferIsEmpty[4900];
    Cliente* this=NULL;
    this=Cliente_new();

        pArchivo=fopen("/home/alumno/archivoTexto.csv", "r");
        if(pArchivo != NULL)
        {
            while(!feof(pArchivo)){
            fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",bufferId,bufferNombre,bufferApellido,bufferIsEmpty);//el ultimo [^,]% debe ser [^\n]%
            set
                if(
                    !Cliente_setNombre(this,nombre)&&
                    !Cliente_setApellido(this,apellido)&&
                    !Cliente_setIsEmpty(this,isEmpty)&&
                    !Cliente_setId(this,id))
                {

                }
            }
            fclose(pArchivo);
        }
        else
            {
                printf("\nno existe el archivo!");
            }



    // ver esto Cliente_delete(this);
    return this;
}
