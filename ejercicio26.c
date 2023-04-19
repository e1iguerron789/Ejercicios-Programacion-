/*Leer un número entero y determinar cuál es el mayor de sus dígitos.*/

#include <stdio.h>
int main ()
{
    int num,mayor,digito; /*Declaramos variables*/
    printf("Ingrese un numero entero:");
    scanf("%d",&num); 
    
   
    if(num>0) 
    {
              mayor=num%10;  /*Asì encontramos el primer digito que seria el ultimo del numero ingresado
                               y damos por hecho que para empezar es el mayor  */
               num=num/10;
        
           while(num>0){
            
              digito = num%10; /*Encontramos los otros digitos y comprobamos uno a uno si es
                                  mayor que el mayor del principio*/
              
              if(digito>mayor){
                  mayor=digito;
              }else{
                 mayor=mayor;
              }
              

              num=num/10;
              
          }
          printf("El digito mayor es : %d",mayor);
          
         
     }else{
         printf("El numero ingresado no es valido. Ingrese un numero diferente de 0");
     }
     
     
    return 0 ;
}