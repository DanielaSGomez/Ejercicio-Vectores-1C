#include <stdio.h>
#include <stdlib.h>
#include "ejercicio.h"
#include <string.h>
#include <ctype.h>

void pedirCadena(char[],char[],int);
void validarTamCadena(char[],char[],int);

int main()
{

    char nombre[15];
    char apellido[15];
    char nombreApellido[31];//la puedo inicializar = ""; para no tener que vaciarla con strcpy
    char auxCAdena[100];
    int i =0;
    //int tam;
   // int lenNombre;
   // int lenApellido;

    pedirCadena("nombre: ",nombre,15);
    pedirCadena("apellido: ",apellido,15);




    //lenNombre = strlen(nombre);

    //lenApellido = strlen(apellido);



  //  for(i=0;i<lenNombre;i++)
   // {


   // }

  //  for(i=0;i<lenApellido;i++)
   // {
    //    strlwr(apellido);
    //}

   // nombre[0]= toupper(nombre[0]);
   // apellido[0]= toupper(apellido[0]);

    strcpy(nombreApellido,apellido);//usando el strcpy(la direccion, lo que se le agrega)indico que en nombreApellido aparezca o se agrege el apellido//tambien pu
    strcat(nombreApellido,", ");//agrego a nombre y apellido la coma y el espacio entre apellido y nombre

    strcat(nombreApellido,nombre);//agrego al final la coma

    strlwr(nombreApellido);//estandarizo todo a minuscula
    nombreApellido[0]= toupper(nombreApellido[0]);//paso el primewr caracter de todao nombreApellido a mayuscula.

    while(nombreApellido[i]!='\0')
    {

        if(nombreApellido[i]== ' ')//== espacio//tambien se puede usar la funcion isspace
        {
            nombreApellido[i+1]= toupper(nombreApellido[i+1]);
        }
        i++;
    }



    printf("%s",nombreApellido);


    return 0;
}

void pedirCadena(char mensaje[],char cadena[],int tam)//para validar que ingrese algo menor a largod el vector y que no desborde
{
    printf("Ingrese %s",mensaje);
    fflush(stdin);
    gets(cadena);
    validarTamCadena(mensaje,cadena,tam);
}
void validarTamCadena(char mensajeError[],char cadena[],int tam)
{
    while(strlen(cadena)>tam)
    {
        printf("%s",mensajeError);
        fflush(stdin);
        gets(cadena);
    }
}
