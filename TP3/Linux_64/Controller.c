#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "parser.h"
#include "Funciones.h"
/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */




int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{
    FILE* pArchivo;
    int retorno = -1;
    pArchivo = fopen(path,"r");
    if(!parser_EmployeeFromText(pArchivo,pArrayListEmployee))
    {
        retorno =0;
    }
    fclose(pArchivo);
    return retorno;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee, int len)
{
    int retorno = -1;
    int i ;
    Employee* auxPunteroEmpleado;
    char nombre[50];
    int id;
    int horasTrabajadas;
    int sueldo;
    if(pArrayListEmployee != NULL)
    {
        for(i = 0; i < len ; i++)
        {
            auxPunteroEmpleado=ll_get(pArrayListEmployee,i);
            Employee_getNombre(auxPunteroEmpleado,nombre);
            Employee_getSueldo(auxPunteroEmpleado,sueldo);
            Employee_getHorasTrabajadas(auxPunteroEmpleado,horasTrabajadas);
            Employee_getId(auxPunteroEmpleado,id);
            printf("\n%d-%s-%d-%d",id,nombre,horasTrabajadas,sueldo);



            retorno=0;
        }
    }
    return retorno;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    int retorno=-1;

    FILE* pArchivo;
    if(path !=NULL && pArrayListEmployee != NULL)
    {
        pArchivo=fopen(path,"a");
        if(pArchivo!= NULL && (!parser_EmployeeFromText(pArchivo,pArrayListEmployee)))
        {
            retorno=0;
        }
    }

    return retorno;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}
