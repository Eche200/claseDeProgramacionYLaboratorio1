#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include "UTN_ArrayEmployees.h"
#include "Funciones.h"
//funcion para señalar indices.
//listar empleados



/** \brief esta funcion recibe por parametro un array , un limiteDeArrayDeEmployee y un indice
 *el array es donde se  haran las operaciones , y la cantidad maxima de  empleados que puedo almacenar
 *con esos datos  mas el indice que nos pase , podemos  imprimir los datos que nos pide , promedio total,   suma total de sueldos y empleados con mas del sueño basico
 * \param Empleado arrayDeEmployee[] es el  array que le paso como parametro
 * \param limiteDeArrayDeEmployee cantidad maxima del array
 *\param limiteDeArrayDeEmployee obtiene un  id y buscamos en el array
 *\param indice de donde va a empezar a  buscar
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */


int UTN_imprimirTotalPromedioYEmployeeQueSuperanSalarioPromedio(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int indice)
{
    int retorno = -1;
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
        retorno=0;
    }
    return retorno;
}



/** \brief esta funcion recibe por parametro un array , un limiteDeArrayDeEmployee y un identificador unico
 *el array es donde se  haran las operaciones , y la cantidad maxima de  empleados que puedo almacenar
 *con esos datos  mas el ID que nos pase , podemos  saber si existe en el array y si existe lo podremos dar de baja.
 * \param Empleado arrayDeEmployee[] es el  array que le paso como parametro
 * \param limiteDeArrayDeEmployee cantidad maxima del array
 *\param idDePersonaABorrar obtiene un  id y buscamos en el array
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */

int UTN_removeEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int idDePersonaABorrar)
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

/** \brief esta funcion recibe por parametro un array , un limiteDeArrayDeEmployee y un identificador unico
 *el array es donde se  haran las operaciones , y la cantidad maxima de  empleados que puedo almacenar
 *con esos datos  mas el ID que nos pase , podemos  saber si existe en el array y si existe lo podremos modificar.
 * \param Empleado arrayDeEmployee[] es el  array que le paso como parametro
 * \param limiteDeArrayDeEmployee cantidad maxima del array
 *\param idDePersonaAModificar obtiene un  id y buscamos en el array
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 */



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
                    retorno = 0;
                    break;
                case 2:
                    printf("\ningrese el nuevo apellido del empleado");
                    //hay que usar fget y usar strncpy
                    scanf("%s" , arrayDeEmployee[i].apellido);
                    retorno = 0;

                    break;
                case 3:
                    printf("\ningrese el nuevo sueldo del empleado");
               //hay que usar fget y usar strncpy
                    scanf("%f" , &arrayDeEmployee[i].sueldo);
                    retorno = 0;
                    break;
                case 4:
                    printf("\ningrese el nuevo sector del empleado");
               //hay que usar fget y usar strncpy
                    scanf("%d" , &arrayDeEmployee[i].sector);
                    retorno = 0;
                    break;
                default:
                    printf("te equivocaste de opcion");
                    retorno = 0;
                    break;
                }


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

int UTN_initEmployees(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee)
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

/** \brief esta funcion recibe por parametro un array y un limite
 *el array es donde se  haran las operaciones , y la cantidad maxima de  empleados que puedo almacenar
 *le pasaremos un nombre, apellido , saldo , sector ,  y daremos de alta un empleado y le pondremos un ID UNICO y pondremos que isEmpty es 0 porque esta lleno
 * \param Empleado arrayDeEmpleados[] es el  array que le paso como parametro
 * \param limiteDeArrayDeEmpleados cantidad maxima del array
 * \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
 *
 */

FALTAN COSAS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! traer datos!!!!!!!!!


int UTN_addEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee)
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


/** \brief no recibe parametros , lo que haces es crear  una variable permanente que se autoincrementa cada vez que la llamamos y nos devuelve el proximo ID
 * \return devuelve el siguiente ID
 *
 */


int  UTN_obtenerSiguienteId()
{
    static int idEmpleado=0;
    idEmpleado++;
    return idEmpleado;
}




int UTN_sortEmployees(Employee arrayDeEmployee[], int limite , int indice)
{
    int retorno = 0;
    int i;
    char auxDeNombreDelEmployee[51];
    int posicion;
    for ( i = indice ; i < limite ; i++)
    {
        posicion = i;
        strncpy(auxDeNombreDelEmployee, arrayDeEmployee[i].nombre , CANTIADDECARACTERESMAXIMOSPARANOMBRE);
        while( i > 0 && strcmp(auxDeNombreDelEmployee, arrayDeEmployee[posicion - 1].nombre)<0)
        {
            strncpy(arrayDeEmployee[posicion].nombre , arrayDeEmployee[posicion - 1].nombre, 51);

            if(strcmp(auxDeNombreDelEmployee, arrayDeEmployee[posicion - 1].nombre) == 0)
            {
                while(arrayDeEmployee[posicion].sector < arrayDeEmployee[posicion - 1].sector && strcmp(auxDeNombreDelEmployee , arrayDeEmployee[posicion - 1].nombre) == 0 )
                {
                    strncpy(arrayDeEmployee[posicion].nombre , arrayDeEmployee[posicion - 1].nombre, 51);
                    posicion--;
                }
            }

        }
        strncpy(arrayDeEmployee[posicion].nombre,auxDeNombreDelEmployee,CANTIADDECARACTERESMAXIMOSPARANOMBRE);
    }
    return retorno;
}






int printEmployees(Employee arrayDeEmployee[], int limite)
{
    int retorno = -1;
    int i;

    if(arrayDeEmployee != NULL && limite > 0 )
    {
        for( i = 0 ; i < limite ; i++)
        {
            if( arrayDeEmployee[i].isEmpty == 0)
            {
                printf("%d\t%s\t%s\t%.2f\t%d", arrayDeEmployee[i].id ,arrayDeEmployee[i].nombre, arrayDeEmployee[i].apellido, arrayDeEmployee[i].sueldo, arrayDeEmployee[i].sector);
                printf("\n");
            }

        }
        retorno = 0;
    }



    return retorno;
}

int findEmployeeById(Employee arrayDeEmployee[], int limite,int id)
{
    int retorno = -1;
    int i;

    if( arrayDeEmployee !=NULL && limite > 0 && id > -1)
    {
        for( i = 0 ; i < limite ; i++ )
        {
            if(arrayDeEmployee[i].id == id)
            {
                retorno = i;
                break;
            }

        }

    }

    return retorno;


}
