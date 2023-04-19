/*Mostrar en pantalla la tabla de multiplicar del número 5.*/

#include <stdio.h>
int main ()
{
    int i,mult,operacion,n=5; /*Declaramos las variables*/
    printf("A continuacion se mostrara en pantalla la tabla de multiplicar del 5\n"); /*Un pequeño menù para aclarar lo que se hara al usuario*/
    printf("Ingresa hasta que numero quieres que multiplique el 5:\n");
    scanf("%d",&mult);
    printf("   ----TABLA DE MULTIPLICAR DEL 5---- \n");
    for(i=1;i<=mult;i++) /*Se multiplicara el 5 hasta el numero especificado por el usuario*/
    {
        operacion=n*i;
        printf("               %d * %d = %d\n",n,i,operacion);
    }
    return 0 ;
}