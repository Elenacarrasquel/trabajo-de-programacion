#include <stdio.h>

int main () {

    int numeros[100];

int cont, i, primo,x;

i=0;

for (x = 1; x <=100; x++)
{
    cont=0;

    for ( primo = 1; primo<=x ; primo++) 
    {
        if (x%primo ==0)
        
        {
        cont++; 
        }
        
    }
  if (cont==2||primo==1||primo==0)


  {
      numeros [i]=x;

      i++;


      
  }
    
}
for ( x = 0; x <i; x++)
{
    printf ("%d\n",numeros[x]);
}

system ("pause");



} 