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
int UTN_altaDeEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee);
int UTN_inicializarArray(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee);
int UTN_modificarEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int idDePersonaAModificar);
int UTN_darDeBajaAEmployee(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int idDePersonaABorrar);
int UTN_imprimirTotalPromedioYEmployeeQueSuperanSalarioPromedio(Employee arrayDeEmployee[], int limiteDeArrayDeEmployee, int indice);


#endif // UTN_ARRAYEMPLOYEES_H_INCLUDED
