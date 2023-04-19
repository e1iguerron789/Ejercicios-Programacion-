/*Leer un número entero y calcular el promedio entero de los factoriales de los enteros comprendidos entre 1 y el número leído.*/

#include <stdio.h>

int main()
{
    int n,factorial=1,suma=0,i; /*Declaramos las variables,determinando cuales seran enteras o flotantes*/
    float promedio; 
    printf("Ingrese un numero entero:");
    scanf("%d",&n);
    for(i=2;i<n;i++)   /*i iniciara en 2 ya que solo queremos los numeros entre el 1 y el numero ingresado
                          por ende estos 2 no se incluyen*/
    {
        factorial=factorial*i;  /*En esta parte el valor a multiplicar empezara por el 2 y asi multiplicara hasta cumplir
                                      la condicion*/
        suma=suma+factorial;
        
    }
    n=n-2; /* Para sacar el numero para promediar , solo restamos 2 al numero inicial ingresado
                ya que ni el 1 ni el numero se utilizan para el proceso de sumatoria y factorial*/
    promedio=suma/n;
    printf("La suma de los factoriales es: %d\n",suma);
    printf("El promedio de esta sumatoria es: %f",promedio);
    return 0;
}
