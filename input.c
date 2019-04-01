#include "input.h"
#include <stdio.h>

void cargarValor(int numeros[], int tamano)//FOR PARA CARGAR VALORES DONDE ESPECIFICO DONDE LOS GUARDO.
{
    int i;
    for(i=0;i<tamano;i++)
    {
        printf("Ingrese un numero ");
        scanf("%d",&numeros[i]);//SE GUARDA EL VALOR EN UN INDICE DEL ARRAY NUMEROS.
    }
}

void mostrarValor(int numeros[],int tamano)//FOR PARA MOSTRAR LOS VALORES.
{
    int i;
    for(i=0;i<tamano;i++)
    {
        printf("%d",numeros[i]);//MUESTRO EL VALOR GUARDADO EN UN INDICE DEL ARRAY.
    }
}

int buscarValor(int numeros[],int tamano,int valor)
{
    int i;
    int indice = -1;//LO INICIALIZO EN MENOS UNO PARA PODER HACER ALGO CUANDO EL VALOR NO PERTENECE AL ARRAY.

    for(i=0;i<tamano;i++)
    {
        if(numeros[i]==valor)//SI EL VALOR INGRESADO ES IGUAL A UN VALOR DEL ARRAY----->
        {
            indice=i;
        }
    }

    return indice;
}

int buscarMaximo(int numeros[],int tamano)
{
    int i;
    int maximo;
    int flag = 0;

   for(i=0;i<tamano;i++)
   {
       if(flag==0||numeros[i]>maximo)
       {
           maximo=numeros[i];//ASIGNO A MAXIMO EL VALOR DEL DATO GUARDARO EN EL INDICE DEL ARRAY QUE CORRESPONDE.
           flag++;
       }
   }

   return maximo;//RETORNO EL VALOR MAXIMO CORRESPONDIENTE AL INDICE.

}

