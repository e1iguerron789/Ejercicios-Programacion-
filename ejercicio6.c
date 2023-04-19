#include <stdio.h>
int main ()
{
    int num,digito,cont=1;
    printf("Ingrese un numero entero de 3 digitos:");
    scanf("%d",&num);

    if(num!=0 && num>=100 && num<=999)
     {
        do{
          digito=num%10;
          printf("\nEl digito es: %d",digito);
          if(digito!=2 && digito!=1 && digito!=0)
           {
          printf("\nLos numeros enteros entre el 1 y este digito son:\n");
          
          for(int i=2;i<digito;i++)
        {
          
          printf("  %d",i);
        }  
           }else{
               printf("\nNo hay ningun numero entre el 1 y este digito.\n"); 
           }
          num=num/10;
         
        cont=cont+1;
        }while(cont<=3);
        
     }else{
         printf("El numero ingresado no es valido. Ingrese un numero de 3 digitos y diferente de 0");
     }
     
     
    return 0 ;
}