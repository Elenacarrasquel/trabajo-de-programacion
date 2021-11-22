#include <stdio.h>

/* Que lea 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar 
los 10 números en pantalla mediante un solo array*/

int main ()
{
int numeros[10],numerosdos[5], numerostres[5];

for (int i=0; i<5; i++)
{
printf("ingrese un numero: ");
scanf("%i",&numerosdos[i]);
}
for (int i=0; i<5; i++)
{
printf("ingrese un numero: ");
scanf("%i",&numerostres[i]);
}
for (int i=0; i<5 ; i++)
{
numeros[i]=numerosdos[i];
numeros[5+i]=numerostres[i]; // inicie desde la celda 5 y guarde lo 5 numero restantes//
}

for (int i=0; i<10; i++)
{
printf("%i\t",numeros[i]);
}


}
