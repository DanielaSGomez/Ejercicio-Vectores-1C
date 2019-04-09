#include <stdio.h>                  //♥<----------ESTRUCTURAS---------->♥
#include <stdlib.h>            //SON LA ALTERNATIVA BUENA A VECTORES PARALELOS.

            //DISEÑA UN NUEVO TIPO DE DATO, FORMADO POR N CANTIDAD DE VARIABLES, PRA NO ANDAR DECLARANDO UN MONTON DE VARIABLES

//SE DECALARA:
//se define el tipo de dato
typedef struct//SE DEFINE COMO ESTA COMPUESTA LA VARIABLE EMPLEADO: LEGAJO, SEXO, NOMBRE, ETC. <<<<AHORA eESTRUCT EN UNA VARIABLE SOLA>>>>>>
{
    //A LAS VARIABLES DE LAS ESTRUCTURAS SE LAS DENOMINA >>CAMPOS<< O ATRIBUTO
    int legajo;//4BYTES
    char nombre[20];//cadena de caracteres con 20 bytes
    char sexo;//escalar//1BYTE
    float sueldoBruto;//4BYTES
    float sueldoNeto;//4BYTES
    //TOTAL 33 BYTES

}eEmpleado;//CIERRA CON ;

int main()
{
   /* //SI USO TYPEDEF ARRIBA PARA DEFINIR STRUC NO NESECITO DECIR QUE TIPO DE DATO ES ACA EEMPLEADO, SINO TENGO QUE ESCRIBIR
    //struct eEmpleado unEmplado;
    eEmpleado unEmpleado= {1000, "Walter", 'm',15000,12000} ;//STRUCT ES UN TIPO DE VARIABLE, eEMPLEADO ES EL NOMBRE DE LA VARIEBLE STRUCT, UNEMPLEADO
    /*unempleado es el como el numero de empleado estas declarando una nueva variable*/
    //le cargo a los datos de unempleado los datos del struct en el orden que estan declaradas en la estructura.
   /* eEmpleado otroEmpleado= {1001, "jOSE", 'm',18000,15000} ;
    puts(unEmpleado.nombre);
    puts(otroEmpleado.nombre);//PUEDO USAR PRINTF. PONGO LA VARIABLE DE LA ESTRUCTURA Y . ME MUESTRA LAS OPCIONES DE LA ESTRUCUTA QUE PUEDO MOSTRAR. ESTOY ACCEDIENDO AL CAMPO DE ESE ALUMNO
    */

    eEmpleado unEmpleado;

    printf("Ingrese legajo");
    scanf("%d",&unEmpleado.legajo);
    printf("Ingrese nombre");
    gets(unEmpleado.nombre);
    fflush(stdin);
    printf("Ingrese sexo:");
    scanf("%c",&unEmpleado.sexo);
    printf("Ingrese el sueldo bruto:");
    scanf("%f",&unEmpleado.sueldoBruto);

    unEmpleado.sueldoNeto = unEmpleado.sueldoBruto*0.85;

    printf("%d-%s-%c-%f-%f",unEmpleado.legajo,unEmpleado.nombre,unEmpleado.sexo,unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

    return 0;
}
