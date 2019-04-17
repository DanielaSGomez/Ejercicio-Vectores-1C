#include <stdio.h>
#include "empleados.h"
#define LIBRE 0
#define OCUPADO 1
int mostrarMenu(char mensaje[])
{
    int opcionElegida;
    printf("%s",mensaje);//CAMBIAR POR UNA FUNCION GETINT();
    scanf("%d",&opcionElegida);

    return opcionElegida;
}

void inicializarArray(eEmpleados lista[],int tam)
{
    int i;
    for(i=0;i<tam;i++)//RECORRE EL ARRAY DE EEMPELADOS Y CARGA TODA LA LISTA COMO VACIA
    {
        lista[i].isEmpty = LIBRE;
    }

}

int buscarLibre(eEmpleados lista[],int tam)
{

    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;

}

void altaEmpleado(eEmpleados lista[],int tam)//TOMA COMO PARAMETROS EL ARRAY DE EMPLEADOS Y EL TAMAÑO DEL ARRAY
{
    int i;
    i = buscarLibre(lista,tam);

    if(i==-1)


}
