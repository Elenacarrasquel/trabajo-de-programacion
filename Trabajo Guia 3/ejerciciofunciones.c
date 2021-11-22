#include <stdio.h>

/* 
Escribir un programa que realice las siguientes tareas: Leer 2 números reales , llame a 
una función menu() con 4 opciones + - * /, realizar la operación correspondiente y 
mostrar el resultado
*/

void suma(int a, int b);

void resta(int a, int b);

void multiplicacion(int a, int b);

void division(int a, int b);

void menu();

void pedir_datos();

int numero1, numero2;

void pedir_datos()
{

    printf("ingrese el primer valor \n");

    scanf("%d", &numero1);

    printf("ingresar el segundo valor \n");

    scanf("%d", &numero2);
}

void suma(int a, int b)
{
    int sum = a + b;
    printf("la suma entre %d+%d =%d", a, b, sum);
}

void resta(int a, int b)
{
    int res = a - b;
    printf("la resta entre %d-%d =%d", a, b, res);
}

void multiplicacion(int a, int b)
{
    int mult = a * b;
    printf("la multiplicacion entre %d*%d =%d", a, b, mult);
}

void division(int a, int b)
{
    int div = a / b;
    printf("la division entre %d/%d =%d", a, b, div);
}

void menu()
{
 int opcion; 
 do
 {
 printf ("si queres sumar seleccionar opcion 1");
 printf ("si quieres restar selecciona opcion 2");
 printf ("si quieres multiplicar selecciona opcion 3");
 printf ("si quieres dividir seleccionar opcion 4");
 printf ("si queres salir opcion 5");
scanf ("%d",&opcion);
switch (opcion)
{
    system ("pause");
    break;
    case 1:
    pedir_datos ();
    suma (numero1, numero2);
    
    system ("pause");
    break;
    case 2:
    pedir_datos();
    resta (numero1, numero2);

    system ("pause");
    break;
    case 3:
    pedir_datos();
    multiplicacion (numero1, numero2);

    system ("pause");
    break;
    case 4:
    pedir_datos ();
    division (numero1, numero2);

 system ("pause");
    break;
    

default:
printf ("se salio del programa");
system("pause");


    break;
}

 } while (opcion <=4);

}

int main()
{
menu ();

}