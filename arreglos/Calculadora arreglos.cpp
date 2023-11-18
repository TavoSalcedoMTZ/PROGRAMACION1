#include <stdio.h>

int main()
{
    int num1[5],calificacion,i;
    
    for(i=0; i<5; i++)
    {
        
        printf("Ingresa una calificacion \n");
        scanf("%d",&num1[i]);
  
    }
    i=0;
    while(i<5){
        calificacion+=num1[i];
        i++;
    }
    calificacion=calificacion/5;
    
    
    if (calificacion >=6)
    {
    
    printf("\n Estas aprobado con %d", calificacion);
    }
    else{
    
    printf("\n Estas reprobado con %d", calificacion);
    }
    return 0;
    
}