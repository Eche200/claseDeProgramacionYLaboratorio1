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
            Employee_getSueldo(auxPunteroEmpleado,&sueldo);
            Employee_getHorasTrabajadas(auxPunteroEmpleado,&horasTrabajadas);
            Employee_getId(auxPunteroEmpleado,&id);
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
 *recorrer la list a, y  escribirla en un archivo
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{


    return 1;
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
    FILE* pArchivo;
    int i;
    int retorno= -1;
    Employee* pEmpleado;
    pArchivo=fopen(path,"wb");
    if(pArchivo !=NULL)
    {
        for(i=0;i<ll_len(pArrayListEmployee);i++)
        {
            pEmpleado=ll_get(pArrayListEmployee,i);
            fwrite(pEmpleado,sizeof(Employee),1,pArchivo);
        }
        retorno=0;
    }
    return retorno;
}

/*
funcion next , primer nodo , siguiente  , file. preguntar  yo le cambio valor a  i , y le doy del anterior , y  que busque el que sigue
*/

//VER DONDE MEIRDA ESTA ESTO
/*int retorno=-1;
    FILE* pArchivo;
    pArchivo=fOpen(path,"rb");
    retorno= parser_EmployeeFromBinary(pArchivo,pArrayListEmployee);
    fclose(pArchivo);
    return retorno;*/
