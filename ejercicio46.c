
#include <stdio.h>

int main()
{
    int n,factorial=1,suma=0,i;
    float promedio;
    printf("Ingrese un numero entero:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        factorial=factorial*i;
        suma=suma+factorial;
        
    }
    n=n-2;
    promedio=suma/n;
    printf("Suma: %d\n",suma);
    printf("Promedio: %f",promedio);
    return 0;
}
