#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    id, first_name , last_name , is_empty
    1,Eric,Knight,False
    */

    FILE* pArchivo;
    pArchivo=fopen("/home/alumno/archivoTexto.csv" , "r");
    char bufferId[4900];
    char bufferNombre[4900];
    char bufferApellido[4900];
    char bufferIsEmpty[4900];

    if(pArchivo != NULL)
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",bufferId,bufferNombre,bufferApellido,bufferIsEmpty);//el ultimo [^,]% debe ser [^\n]%
        printf("%s-%s-%s-%s\n",bufferId,bufferNombre,bufferApellido,bufferIsEmpty);
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",bufferId,bufferNombre,bufferApellido,bufferIsEmpty);//el ultimo [^,]% debe ser [^\n]%
        printf("%s-%s-%s-%s\n",bufferId,bufferNombre,bufferApellido,bufferIsEmpty);
        fclose(pArchivo);
    }
    else
    {
        printf("\nno existe el archivo!");
    }

    return 0;
}

/*
para escribir

int main()
{

    id, first_name , last_name , is_empty
    1,Eric,Knight,False


    FILE* pArchivo;
    pArchivo=fopen("/home/alumno/archivoTexto.csv" , "r");
    pArchivo2=fopen("/home/alumno/archivoTexto2.csv" , "w");
    char buffer[4900];
    if(pArchivo != NULL)
    {
        fscanf(pArchivo,"%s\n",buffer);
        printf(buffer);
        fprintf(pArchivo2,"%s\n",buffer);
        fscanf(pArchivo,"%s\n",buffer);
        printf("\n%s",buffer);
        fclose(pArchivo);
        fprintf(pArchivo2,"%s\n",buffer);
    }
    else
    {
        printf("\nno existe el archivo!");
    }

    return 0;
}




*/
