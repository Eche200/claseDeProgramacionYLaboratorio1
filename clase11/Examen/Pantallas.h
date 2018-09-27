#ifndef PANTALLAS_H_INCLUDED
#define PANTALLAS_H_INCLUDED

typedef struct pantallas{
    int id_pantalla;
    char nombreDeLaPantalla[100];
    char direccion[100];
    float precioDeLaPublicidad;
    int isEmpty;

}pantalla;


int idPantallaAutoIncrementa();
int altaDePantalla ();



#endif // PANTALLAS_H_INCLUDED
