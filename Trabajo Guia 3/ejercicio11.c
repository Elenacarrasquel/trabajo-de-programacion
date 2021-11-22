#include <stdio.h>

/*Que rellene un array con los 100 primeros números pares y 
muestre su suma*/

int main ()
{
int numeros[100],contador=0,suma=0;
 for (int i=1; i<=100; i++)
 {
if (i%2==0)
{
numeros[contador]=i;
contador++;
}

 }
 for (int x=0; x<contador; x++)
 {
suma=suma+numeros[x];
 }
 printf("%i",suma);
 
}
