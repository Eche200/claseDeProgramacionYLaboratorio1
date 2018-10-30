#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto). esta
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/

// aca debe haber , solo metodos y case
//crear funcion que  haga ID automatico
int main()
{

    int option = 1;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
               /* printf("size de la lista %d",ll_len(listaEmpleados));

                controller_ListEmployee(listaEmpleados,ll_len(listaEmpleados));*/

                option =2;
                break;
            case 2:
                controller_saveAsText("data.csv",listaEmpleados);

                printf("size de la lista %d",ll_len(listaEmpleados));

                controller_ListEmployee(listaEmpleados,ll_len(listaEmpleados));
                option=10;
                break;

        }
    }while(option != 10);
    return 0;
}
