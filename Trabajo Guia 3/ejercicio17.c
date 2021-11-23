#include <stdio.h>
/*
Que muestre los primeros 100 números de izquierda a derecha usando un array de dos 
dimensiones, la última fila a mostrará la suma de sus respectivas columnas
Alumna:Elena Carrasquel.
*/

int main()
{

    int x,y,sum, numeros[11][10];
   
    for (y=0;y<10;y++)
    {
        sum=0;
        for (x=0;x<10;x++)
        {
            numeros[x][y]=(x*10)+1+y;
            sum=sum+numeros[x][y];
        }
        numeros[10][y]=sum;
    }
   
    for (x=0;x<11;x++)
    {
        for (y=0;y<10;y++)
        {
            printf("%d ",numeros[x][y]);
        }
        printf("\n");
    }

}