#include <stdio.h>//INGRESAR DATOS DE LEGAJOS DE 5 EMPLEADOS,DECLARAR UN VECTOR POR CADA DATO QUE QUIERO REPRESENTAR(legajo, sueldo y sexo de los 5 empleados)
#include <stdlib.h>//CREACION DE VECTORES PARALELOS//--ARRAY DE CADENAS = MATRIZ(CONJUNTO DE ELEMENTOS ORGANIZADOS EN FILAS Y COLUMNAS)
#include <string.h>
#define T 2

void pedirCadena(char[],char[],int);
void validarTamCadena(char[],char[],int);

int main()
{
    int legajos[T];//
    float sueldosBruto[T];
    char sexos[T];
    char nombres[T][20];//declaro una matriz con dos arrays filas [T]=cantidad de empleados y cantidad de caracteres en cada array
    int i;
    float sueldoNeto[T];
    int j;
    int auxEntero;//un auxiliar por cada tipo de dato
    float auxFlotante;
    char auxCaracter;
    char auxCadena[100];

    //PARA CARGAR SECUENCIALMENTE LOS DATOS
    for(i=0; i<T ; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d",&legajos[i]);//necesito la direccion de memoria de legajos, si no le pongo la direccion va a cargar siemrpe en posicion 0
        printf("Ingrese sueldo: ");
        scanf("%f",&sueldosBruto[i]);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c",&sexos[i]);
        pedirCadena("Nombre: ",nombres[i],20);

        sueldoNeto[i] = sueldosBruto[i]*0.85;//le saco el 15%

    }

    //PARA ORDENARLOS POR LEGAJO USO EL BURBUJEO

    for(i=0; i<T-1;i++)
    {
        for(j=i+1;j<T;j++)//asi movia la flecha por el vector
        {
            //declaro como se van a ordenar los legajos

            if(legajos[i]>legajos[j])
            {
                auxEntero = legajos[i];
                legajos[i] = legajos[j];
                legajos[j] = auxEntero;

                auxFlotante = sueldosBruto[i];
                sueldosBruto[i] = sueldosBruto[j];
                sueldosBruto[j]=auxFlotante;

                auxCaracter = sexos[i];
                sexos[i] = sexos[j];
                sexos[j] = auxCaracter;

                //falta el swaop de la cadena nombres que se hace con strgcpy xq justamaente es un string
            }
        }
    }

    for(i=0; i<T; i++)
    {
        printf("Legajo: %d. Nombre: %s. Sueldo Bruto %.2f. Sueldo neto: %.2f. Sexo: %c.\n",legajos[i],nombres[i],sueldosBruto[i],sueldoNeto[i],sexos[i]);
    }


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
