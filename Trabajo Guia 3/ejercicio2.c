#include <stdio.h>

#define numeromaximo 100

/*
Que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden descendente.
Alumna:Elena Carrasquel.
*/
int main (){

    int numero [numeromaximo];
    
    for (int i = 0; i <=numeromaximo; i++)
    {
        printf("ingrese un numero ");

scanf("%d",&numero[i]);

    }
    for (int i=1;   i<=numeromaximo; i++){

        for ( i = 1; i <numeromaximo; i++)
        {
            if (numero[i]<numero[i+1])
            {

            
                int min=numero[i];

                numero[i]=numero[i+1];

numero[i+1] =min;


            }
            
        }
        
    } 
    for (int i = 1; i <numeromaximo; i++)
    {
        printf("%d/t",numero[i]);
        

        
    }
    
    




}