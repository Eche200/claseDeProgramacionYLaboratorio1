#ifndef UTN_ARRAYEMPLOYEES_H_INCLUDED
#define UTN_ARRAYEMPLOYEES_H_INCLUDED

#define CANTIADDECARACTERESMAXIMOSPARANOMBRE 51
#define CANTIADDECARACTERESMAXIMOSPARAAPELLIDO 51

typedef struct sEmployee
{
    int id;
    char nombre[CANTIADDECARACTERESMAXIMOSPARANOMBRE];
    char apellido[CANTIADDECARACTERESMAXIMOSPARAAPELLIDO];
    float sueldo;
    int sector;
    int isEmpty;


}Employee;


int UTN_obtenerSiguienteId();
int UTN_addEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee);
int UTN_initEmployees(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee);
int UTN_modificarEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int idDePersonaAModificar);
int UTN_removeEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int idDePersonaABorrar);
int UTN_imprimirTotalPromedioYEmployeeQueSuperanSalarioPromedio(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int indice);
int UTN_sortEmployees(Employee arrayDeEmployee[], int limite , int indice);
int printEmployees(Employee arrayDeEmployee[], int limite);
int findEmployeeById(Employee arrayDeEmployee[], int limite,int id);

#endif // UTN_ARRAYEMPLOYEES_H_INCLUDED
