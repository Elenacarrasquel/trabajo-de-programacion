#include <stdio.h>

/* Que rellene un array con los numeros impares comprendidos 
entre 1 y 100 y los muestren en pantalla
en orden ascendente*/

int main (){

   int numeros [100];

   int cont, i, comprendidos, x;

   i=0;
    for ( x = 1; x<=100; x++)
    {
        if (x%2 ==1)
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