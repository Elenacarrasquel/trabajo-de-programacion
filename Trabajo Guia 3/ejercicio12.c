#include <stdio.h>

/*Que lea 10 números por teclado, los almacene 
en un array y muestre la media.*/

int main ()
{
int numero[10], suma=0;

for (int i=0; i<10; i++)
{
printf("ingresar un numero");
scanf("%i",&numero[i]);
}
for (int i=0; i<10; i++)
{
suma=suma+numero[i];
}
printf("%i\n",suma/10);
}