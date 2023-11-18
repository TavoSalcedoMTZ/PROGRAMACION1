#include <iostream>


using namespace std;


int ingresar(){
   int calif;
   cout << "Ingresa una calificación: "<<endl;
   cin >> calif;
   return calif;
}


int calculo(int a,int b,int c,int d,int e) {
   int final;
   final = (a + b + c + d + e) / 5;
   return final;
}


int main() {
   int a=ingresar(),b=ingresar(),c=ingresar(),d=ingresar(),e =ingresar();


   int final = calculo(a,b,c,d,e);


   cout << "Tu promedio final es: "<<final<< endl;


   return 0;
}
