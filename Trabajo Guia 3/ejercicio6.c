#include <stdio.h>

int main()
{

    int array[10], suma, resta, multiplicacion, division, i;

    for (i = 0; i < 10; i++)
    {
        printf("Introduzca número\n");
        scanf("%d", &array[i]);
    }

    suma = array[0];
    resta = array[0];
    multiplicacion = array[0];
    division = array[0];

    for (i = 1; i < 10; i++)
    {
        suma = suma + array[i];
        resta = resta - array[i];
        multiplicacion = multiplicacion * array[i];
        
division = division / array[i];
    }

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
    printf("División: %d\n", division);

}
