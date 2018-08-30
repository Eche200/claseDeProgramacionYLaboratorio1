#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    int numero;
    if(getNumero(&numero,"ingrese un numero","Error  , ingrese un numero correcto",0,100,3)==0){
        printf("el numero es %d",numero);
    }
    return 0;
}
// char* mensaje  es igual que  decirle que  va a recibir un STRING
