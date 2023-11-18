#include <stdio.h>

int main()
{
    int a[4],b[4],c[4],i;
    
    for (i=0;i<4;i++){
        
        printf("Ingresa los numeros del primer vector \n");
        scanf("%d",&a[i]);
    
    }
    
    for (i=0;i<4;i++){
        
        printf("Ingresa los numeros del segundo vector \n");
        scanf("%d",&b[i]);
    
    }
    i=0;
        while(i<4){
        c[i]=(a[i]+b[i]);
        
        
        
        printf("La suma de los vectores son : %d \n",c[i]);
        
        i++;
}

    
    

    return 0;
    
}