#include <stdio.h>

/*
Que mediante un array almacene números tanto positivos 
como negativos y los 
muestre ordenados
Alumna:Elena Carrasquel.
*/

int main()
{
    int numeros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("ingrese un numeros tantos positivos como negativos: ");
        scanf("%i", &numeros[i]);
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 0; j < 5 - 1; j++)
        {
            if (numeros[j] < numeros[j + 1])
            {
                int aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1]=aux;
            }
        }
    }
    for (int i=5; i>=0; i--)
    {
        printf("%i\t",numeros[i]);
    }
    
}