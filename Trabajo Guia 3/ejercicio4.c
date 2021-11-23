#include <stdio.h>

/*
Que rellene un array con los números pares comprendidos entre 1 y 100 y 
los muestre en pantalla en orden ascendente.
Alumna:Elena Carrasquel.
*/

int main (){

   int numeros [100];

   int cont, i, comprendidos, x;

   i=0;
    for ( x = 1; x<=100; x++)
    {
        cont =0;

        if (x%2 ==0)
        {
            numeros[i]=x;
            
            i++;


        }

    }
    for (x=0; x<i ; x++)
    {
        printf("%d\n",numeros[x]);


    }
    system ("pause");

    
}