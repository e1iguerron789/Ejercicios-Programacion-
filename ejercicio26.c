#include <stdio.h>
int main ()
{
    int num,mayor,digito;
    printf("Ingrese un numero entero:");
    scanf("%d",&num);
    
   
    if(num>0)
    {
              mayor=num%10;
               num=num/10;
        
           while(num>0){
            
              digito = num%10;
              
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