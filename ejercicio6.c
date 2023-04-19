/*Leer un número entero de tres dígitos y mostrar todos los enteros com- prendidos entre 1 y cada uno de los dígitos.*/

#include <stdio.h>
int main ()
{
    int num,digito,cont=1; /* Declaramos las variables */

    printf("Ingrese un numero entero de 3 digitos:");
    scanf("%d",&num); /* Se guardara en esta variable el numero ingresado por usuario*/

    if(num!=0 && num>=100 && num<=999) /*Con esta condiciòn nos aseguramos de que el numero ingresado sea vàlido*/
     {
        do{
          digito=num%10;  /*Al sacar el resido del numero dividiendo con el 10 se consigue el primer digito*/
          printf("\nEl digito es: %d",digito);
          if(digito!=2 && digito!=1 && digito!=0)/*Ponemos esta condicion debido a que nos pide los numeros entre el 1 y el digito, 
                                                   ya que desde el 1 al 1 y el 1 al 2 , no hay ningun numero*/
           {
          printf("\nLos numeros enteros entre el 1 y este digito son:\n");
          
          for(int i=2;i<digito;i++)  
        {
          
          printf("  %d",i);
        }  
           }else{
               printf("\nNo hay ningun numero entre el 1 y este digito.\n"); 
           }
          num=num/10; /*En este se guardan los digitos restantes del numero original*/
         
        cont=cont+1;
        }while(cont<=3);
        
     }else{
         printf("El numero ingresado no es valido. Ingrese un numero de 3 digitos y diferente de 0");
     }
     
     
    return 0 ;
}