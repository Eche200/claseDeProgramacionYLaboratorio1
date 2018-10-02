#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include "UTN_ArrayEmployees.h"
#include "Funciones.h"
//funcion para señalar indices.
//listar empleados



int UTN_imprimirTotalPromedioYEmployeeQueSuperanSalarioPromedio(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int indice)
{
    int retorno = 0;
    int i;
    float sumaTotalDeSalario = 0;
    float promedioDeSalario ;
    int contadorDeEmployeeMayorAlSalarioComun = 0 ;
    int contadorDeElementos = 0;
    if(arrayDeEmployee != NULL && limiteDeArrayDeEmployee > 0 && limiteDeArrayDeEmployee > indice && indice >= 0)
    {
        for( i = 0 ; i < limiteDeArrayDeEmployee ; i++)
        {
            sumaTotalDeSalario = sumaTotalDeSalario + arrayDeEmployee[i].sueldo;
            contadorDeElementos ++;

        }
        if(contadorDeElementos != 0)
        {
            promedioDeSalario = sumaTotalDeSalario / contadorDeElementos;

        }
        for ( i = 0 ; i < limiteDeArrayDeEmployee ; i++)
        {
            if( arrayDeEmployee[i].sueldo > promedioDeSalario)
            {
                contadorDeEmployeeMayorAlSalarioComun++;
            }
        }
        printf("Suma total sueldo de empleados: %f\n" , sumaTotalDeSalario);
        printf("Promedio de salario total: %f\n" , promedioDeSalario);
        printf("hay %d empleados que tienen el sueldo mayor al promedio." , contadorDeEmployeeMayorAlSalarioComun);
    }
    return retorno;
}





int UTN_darDeBajaAEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int idDePersonaABorrar)
{
    int retorno = -1;
    int i;
    if(arrayDeEmployee != NULL && limiteDeArrayDeEmployee > 0 && idDePersonaABorrar)
    {
        for( i = 0; i < limiteDeArrayDeEmployee ; i++)
        {
            if(arrayDeEmployee[i].id == idDePersonaABorrar && arrayDeEmployee[i].isEmpty == 0)
            {
                arrayDeEmployee[i].isEmpty = 1;
                retorno = 0;
                break;
            }
        }
        if( retorno != 0 )
        {
            printf("el id ingresado no correspondo a un usuario en alta");
        }
    }
    return retorno;
}





int UTN_modificarEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int idDePersonaAModificar)
{
    int retorno = -1;
    int i;
    int opcionDeModificacion;
    if(arrayDeEmployee != NULL && limiteDeArrayDeEmployee > 0 && idDePersonaAModificar > 0)
    {
        for( i = 0; i < limiteDeArrayDeEmployee ; i++)
        {
            if(arrayDeEmployee[i].id == idDePersonaAModificar)
            {
                printf("que dato desea modificar?\n1-Nombre.\n2-Apellido.\n3-Sueldo.\n4-Sector.");
                scanf("%d", &opcionDeModificacion);

                switch(opcionDeModificacion)
                {
                case 1:
                    printf("\ningrese el nuevo nombre del empleado");
               //hay que usar fget y usar strncpy
                    scanf("%s" , arrayDeEmployee[i].nombre);
                    break;
                case 2:
                    printf("\ningrese el nuevo apellido del empleado");
                    //hay que usar fget y usar strncpy
                    scanf("%s" , arrayDeEmployee[i].apellido);

                    break;
                case 3:
                    printf("\ningrese el nuevo sueldo del empleado");
               //hay que usar fget y usar strncpy
                    scanf("%f" , &arrayDeEmployee[i].sueldo);
                    break;
                case 4:
                    printf("\ningrese el nuevo sector del empleado");
               //hay que usar fget y usar strncpy
                    scanf("%d" , &arrayDeEmployee[i].sector);
                    break;
                default:
                    printf("te equivocaste de opcion");
                    break;
                }
                retorno = 0;
                break;
            }
        }
    }
    return retorno;
}

/** \brief esta funcion recibe por parametro un array y un limite
 *el array es donde se  haran las operaciones , y la cantidad maxima de  empleados que puedo almacenar
 *inicializo todos  empleados del array poniendo el atributo .isEmpty en 1 para indicar  que esta vacio
 * \param Empleado arrayDeEmpleados[] es el  array que le paso como parametro
 * \param limiteDeArrayDeEmpleados cantidad maxima del array
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */

int UTN_inicializarArray(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee)
{
    int retorno =-1;
    int i;

    if(arrayDeEmployee != NULL && limiteDeArrayDeEmployee > 0)
    {
        for(i = 0; i < limiteDeArrayDeEmployee ; i++)
        {
            arrayDeEmployee[i].isEmpty=1;
        }
        retorno=0;
    }
    return retorno;
}






int UTN_altaDeEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee)
{
    int retorno = -1;
    int i;

    if(arrayDeEmployee != NULL && limiteDeArrayDeEmployee > 0)
    {
        for( i = 0; i < limiteDeArrayDeEmployee ; i++)
        {
            if(arrayDeEmployee[i].isEmpty == 1)
            {
                printf("\ningrese nombre del empleado");
               //hay que usar fget y usar strncpy
                scanf("%s" , arrayDeEmployee[i].nombre);
                printf("\ningrese apellido del empleado");
               //hay que usar fget y usar strncpy
                scanf("%s" , arrayDeEmployee[i].apellido);

                printf("\ningrese el sueldo del empleado");
               //hay que usar fget y usar strncpy
                scanf("%f" , &arrayDeEmployee[i].sueldo);

                printf("\ningrese sector del empleado");
               //hay que usar fget y usar strncpy
                scanf("%d" , &arrayDeEmployee[i].sector);

                arrayDeEmployee[i].id = UTN_obtenerSiguienteId();
                arrayDeEmployee[i].isEmpty = 0;
                retorno = 0;
                break;

            }
        }
    }
    return retorno;
}





int  UTN_obtenerSiguienteId()
{
    static int idEmpleado=0;
    idEmpleado++;
    return idEmpleado;
}

