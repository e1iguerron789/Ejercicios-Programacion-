/*Mostrar en pantalla el promedio entero de los n primeros múltiplos de 3 para un número n leído.*/

#include <stdio.h>
int main ()
{
    int num,multiplos=0,suma=0,i,cont=0,promedio=0; /*Declaramos las variables*/
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);
    if(num>0){
    for( i=1;i<=num;i++)/*Con el ciclo for se respetira el proceso desde el 1 hasta el numero ingresado*/
    {
       multiplos=i%3;    /*Cuando uno de los numeros cumpla con la condiciòn , entonces se le contara como un multiplo de 3*/
       if(multiplos==0){
        cont++;
         suma=i+suma;
         promedio=suma/cont; /*Toodos los multiplos se sumaran y despues de dividiran con la cantidad de multiplos que recolecto el contador*/
       }
    }
    printf("El promedio de los multiplos de 3 desde el 1 al %d es %d.",num,promedio);
    }else{
        printf("El numero ingresado no es valido. Ingrese un numero diferente de 0");
    }                      /* Hay la posibilidad de que el usuario ingrese mal el nùmero , entonces se visualizara este mensaje*/
    if(num==1||num==2 ){
        printf("No hay ningun multiplo de 3 entre el 1 y el 2");
    } /*Si el usuario llega a ingresar el 2 , se visualizara este mensaje.*/

    
    
    return 0 ;
}