#include <stdio.h>
#include <stdlib.h>
#include "ejercicio.h"
#include <string.h>
#include <ctype.h>


int main()
{

    char nombre[15];
    char apellido[15];
    char nombreApellido[30];
    int i;
    int lenNombre;
    int lenApellido;




    printf("Ingrese su nombre: ");
    gets(nombre);
    lenNombre = strlen(nombre);

    printf("Ingrese su apellido: ");
    gets(apellido);
    lenApellido = strlen(apellido);



    for(i=0;i<lenNombre;i++)
    {

        strlwr(nombre);
    }

    for(i=0;i<lenApellido;i++)
    {
        strlwr(apellido);
    }

    nombre[0]= toupper(nombre[0]);
    apellido[0]= toupper(apellido[0]);

    strcpy(nombreApellido,apellido);//usando el strcpy(la direccion, lo que se le agrega)indico que en nombreApellido aparezca o se agrege el apellido
    strcat(nombreApellido,",");//agrego a nombre y apellido la coma entre apellido y nombre
    strcat(nombreApellido," ");//agrego espacio despues de la coma
    strcat(nombreApellido,nombre);//agrego al final la coma

    printf("%s",nombreApellido);














    return 0;
}
