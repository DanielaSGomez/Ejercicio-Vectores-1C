#include <stdio.h>
#include <stdlib.h>
#include "empleados.h"
#define totalEmpleados 1000

int main()
{
    int opcion;
    eEmpleados lista[totalEmpleados];
    inicializarArray(lista,totalEmpleados);

   do{
        printf("<-----------Bienvenido al sistema de ABM de empleados--------->");
        opcion = mostrarMenu("\nSeleccione una opcion: \n1-ALTA\n2-MODIFICAR\n3-BAJA\n4-INFORMAR\n5-LISTAR\n6-SALIR\n");

        switch(opcion){
            case 1:
                    altaEmpleado(lista,totalEmpleados);
                    break;






        }

   }while(opcion!=6);







    return 0;
}
