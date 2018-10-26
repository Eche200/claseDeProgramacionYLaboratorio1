#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Employee.h"
#include "Controller.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromText(FILE* pFile , LinkedList* pArrayListEmployee)
{
    char bufferId[1024];
    char bufferNombre[1024];
    char bufferHorasTrabajadas[1024];
    char bufferSueldo[1024];
    int flag = 1;
    int retorno =-1;
    Employee* empleado=NULL;
    if(pFile != NULL)
    {
        while(!feof(pFile))
        {
            if(flag){
                flag = 0;
                fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n" , bufferId,bufferNombre,
                bufferHorasTrabajadas,bufferSueldo);
            }
            fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n" , bufferId,bufferNombre,
            bufferHorasTrabajadas,bufferSueldo);
            empleado=Employee_newConParametros(bufferId,bufferNombre,
            bufferHorasTrabajadas,bufferSueldo);
            if(empleado!=NULL)
            {
                retorno=0;
                ll_add(pArrayListEmployee,empleado);
            }
        }
    }
    return retorno;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int parser_EmployeeFromBinary(FILE* pFile , LinkedList* pArrayListEmployee)
{

    return 1;
}
