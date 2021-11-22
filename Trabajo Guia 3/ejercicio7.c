#include <stdio.h>

/*Que lea 10 números por teclado, los almacene en un array y los ordene de forma 
ascendente*/

int main (){

int  numeros[10],auxiliar,i,j;

for ( i = 0; i < 10; i++)

{
printf("ingresar un numero\n");
scanf ("%d",&numeros [i]);

}

for ( i = 0; i < 10-1; i++)
{
for ( j = i+1; j <10 ; j++)
{
    if (numeros[i]<numeros[j])
    {
    auxiliar=numeros[i];
    numeros [i]=numeros [j];
    numeros [j]=auxiliar;
    }
    
}

}

for ( i =10-1; i>=0 ; i--)
{
printf("%d\n",numeros[i]);
    
}

}
