#include <stdio.h>

int main()
{
    int a[8],c[4],i,j;
    
    for (i=0;i<8;i++){
     
      printf("Ingresa los numeros del vector \n");
        scanf("%d",&a[i]);

    }
 
 i=0;
 j=4;
   for (i=0;i<4;i++){
     
     
     c[i]=a[i]+a[j];
     
     printf("\n\nLa suma de los vectores es %d",c[i]);
     j++;
    }
 
 return 0;       
}