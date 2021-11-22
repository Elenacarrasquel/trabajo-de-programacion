#include <stdio.h>

/*Que lea 5 números por teclado, los copie a otro array 
multiplicados por 2 y muestre el 
segundo array*/

int main ()
{
int numero[5], numerodos[5];
for (int i=0; i<5; i++)
{
printf("ingrese un numero: ");
scanf("%i",&numero[i]);
}
for (int i=0; i<5; i++)
{
numerodos[i]=numero[i]*2;

}
for (int i=0; i<5; i++)
{
printf("%i\t",numerodos[i]);
}

}
