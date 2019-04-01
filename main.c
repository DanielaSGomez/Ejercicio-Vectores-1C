#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#define T 5

int main();

int main()
{

int numero[T];
int maximo;
int numeroBuscado;
int indiceFinal;

cargarValor(numero,T);
mostrarValor(numero,T);

maximo = buscarMaximo(numero,T);
printf("El numero maximo es: %d",maximo);

printf("Ingrese un valor a buscar: ");
scanf("%d",&numeroBuscado);

indiceFinal= buscarValor(numero,T,numeroBuscado);
printf("EL indice es %d",indiceFinal);


return 0;

}























































































