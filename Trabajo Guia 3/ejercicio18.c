#include <stdio.h>
/*
Que rellene un array de dos dimensiones con números pares, lo pinte y después que 
pida una posición X,Y y mostrar el número correspondiente.
Alumna:Elena Carrasquel.
*/
int main()
{

    int x,y,num=2, numeros[3][3];
   
    for (x=0;x<3;x++)
    {
        for (y=0;y<3;y++)
        {
            numeros[x][y]=num;
            num=num*2;
        }
    }
   
    printf("Introduzca coordenada x: ");
    scanf("%d",&x);
    printf("Introduzca coordenada y: ");
    scanf("%d",&y);
   
    printf("El número es: %d\n",numeros[x][y]);
   
}