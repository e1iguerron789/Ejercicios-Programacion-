#include <stdio.h>
int main ()
{
    int num,multiplos=0,suma=0,i,cont=0,promedio=0;
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);
    if(num>0){
    for( i=1;i<=num;i++)
    {
       multiplos=i%3;
       if(multiplos==0){
        cont++;
         suma=i+suma;
         promedio=suma/cont;
       }
    }
    printf("El promedio de los multiplos de 3 desde el 1 al %d es %d.",num,promedio);
    }else{
        printf("El numero ingresado no es valido. Ingrese un numero diferente de 0");
    }
    if(num==1||num==2 ){
        printf("No hay ningun multiplo de 3 entre el 1 y el 2");
    }
    
    
    return 0 ;
}