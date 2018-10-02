#include <stdio_ext.h>
#include <stdlib.h>
#include "UTN_ArrayEmployees.h"
#include "Funciones.h"

int main()
{

    Employee arrayDeEmployee[CANTIDADDEMPLEADOS];

    char bufferParaNombre[CANTIDADPARABUFFER];
    char bufferParaApellido[CANTIDADPARABUFFER];
    char bufferParaSueldo[CANTIDADPARABUFFER];
    char bufferParaSector[CANTIDADPARABUFFER];
    int id = UTN_obtenerSiguienteId();

    char opcionDelUsuario[2];
    int  opcion;
    char continuarDelUsuario[2];
    int continuar = 1;

    int devolucion ;

    printf("Bienvenido al programada , siga las instrucciones para realizar operaciones.\n");
    UTN_initEmployees(arrayDeEmployee,0,CANTIDADDEMPLEADOS);
    do
    {
        printf("Ingrese una opcion para operar.\n1-Agregar un Empleado.\n2-Modificar un empleado.\n3-Borrar un empleado.\n4-Listar empleados.\n");
        if(utn_getString(opcionDelUsuario,2) == 0 && utn_isValidInt(opcionDelUsuario,2) == 1 )
        {
            opcion = atoi(opcionDelUsuario);
            switch(opcion)
            {
            case 1:
                system("clear");
                devolucion = UTN_addEmployee(arrayDeEmployee,0,CANTIDADDEMPLEADOS,id,bufferParaNombre,bufferParaApellido,bufferParaSueldo,bufferParaSector);
                if(devolucion == 0)
                {
                    printf("SE AGREGO CORRECTAMENTE  al empleado.\n\n");
                }else
                {
                    printf("no se pudo agregar correctamente al empleado.\n\n");
                }
                break;
            }


        }




        printf("Desea Continuar haciendo operaciones? <1 para si / cualquier numero para no>.\n");
        if(utn_getString(continuarDelUsuario,2) == 0 && utn_isValidInt(continuarDelUsuario,2) == 1)
        {
            continuar = atoi(continuarDelUsuario);

        }
        system("clear");
        //getstring y invalidInt
    }while(continuar == 1);


    return 0;
}
