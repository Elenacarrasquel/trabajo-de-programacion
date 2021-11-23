#include <stdio.h>
#include <stdlib.h>

/*Que rellene un array con 20 números y luego busque un número
 concreto. Informando 
su posición
Alumna:Elena Carrasquel.
*/

int main(){
      int i, x = 0, numero[20], n = 20, numbuscar, centro, inf = 0, sup = n - 1;
    for (i = 0; i < 20; i++)
    {
        printf("Escriba un numero");
        scanf("%d", &numero[i]);
    }
    printf("Escriba el numero a buscar");
    scanf("%d", &numbuscar);
    while (inf <= sup)

    {
        centro = (sup + inf) / 2;
        if (numero[centro] == numbuscar)
        {
            printf("Hemos encontrado el numero.\n");
            x = 1;
            break;
        }
        else if (numbuscar < numero[centro])
        {
            sup = centro - 1;
        }
        else
        {
            inf = centro + 1;
        }
    }
    if (x == 0)
    {
        printf("No existe dicho numero\n");
    }
    
}


