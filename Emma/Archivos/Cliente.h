#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
typedef struct
{
	char nombre[50];
	char apellido[50];
	int isEmpty;
	int id;
}Cliente;




void* Cliente_newConParametrosArchvos(char* nombre,char* apellido,	char* isEmpty,	char* id);


Cliente* Cliente_new();
void Cliente_delete();
Cliente* Cliente_newConParametros(char* nombre,char* apellido,	int isEmpty,	int id);

int Cliente_setNombre(Cliente* this,char* nombre);
int Cliente_getNombre(Cliente* this,char* nombre);

int Cliente_setApellido(Cliente* this,char* apellido);
int Cliente_getApellido(Cliente* this,char* apellido);

int Cliente_setIsEmpty(Cliente* this,	int isEmpty);
int Cliente_getIsEmpty(Cliente* this,	int* isEmpty);

int Cliente_setId(Cliente* this,	int id);
int Cliente_getId(Cliente* this,	int* id);

#endif // CLIENTE_H_INCLUDED
