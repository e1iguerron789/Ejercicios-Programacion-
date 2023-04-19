#include <stdio.h>
int main ()
{
    int i,mult,operacion,n=5;
    printf("A continuacion se mostrara en pantalla la tabla de multiplicar del 5\n");
    printf("Ingresa hasta que numero quieres que multiplique el 5:\n");
    scanf("%d",&mult);
    printf("   ----TABLA DE MULTIPLICAR DEL 5---- \n");
    for(i=1;i<=mult;i++)
    {
        operacion=n*i;
        printf("               %d * %d = %d\n",n,i,operacion);
    }
    return 0 ;
}