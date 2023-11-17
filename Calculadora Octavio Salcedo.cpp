#include <stdio.h>

int main()//declaramos funcion principal
{//abrimos llave de codigo

int numero1, numero2;//declaro las funciones del programa

printf("Ingresa un numero \n");//Mando un mensaje de texto de salida
scanf("%d",&numero1);//Recibo y guardo entrada de informacion
printf("Ingresa un numero \n");//Mando un mensaje de texto de salida
scanf("%d",&numero2);//Recibo y guardo entrada de informacion
printf(" \n El resultado de su suma es %d \n",numero1+numero2);//Mando un mensaje de texto de salida y hago una operacion con las variables
printf(" \n El resultado de su resta es %d \n",numero1-numero2);//Mando un mensaje de texto de salida y hago una operacion con las variables
printf(" \n El resultado de su multiplicacion es %d \n",numero1*numero2);//Mando un mensaje de texto de salida y hago una operacion con las variables
printf(" \n El resultado de su division es %d \n",numero1/numero2);//Mando un mensaje de texto de salida y hago una operacion con las variables

return 0;//regreso valor a la funciones

}//cierro llave de el programa