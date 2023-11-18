#include <iostream>
#include <string>


using namespace std;


//Declara funcion decimal a Hexadecimal
std::string dec2hex(int n) {
    std::string hex = "";
    int r;
    while (n != 0) {
        r = n % 16;
        if (r < 10) {
            hex = std::to_string(r) + hex;
        } else {
            hex = char(r + 55) + hex;
        }
        n /= 16;
    }
    //Returna funcion en Hexadecimal
    return hex;
}
//Declara funcion decimal a binario
std::string dec2bin(int n) {
    if (n == 0) {
        return "";
    }
    return dec2bin(n / 2) + std::to_string(n % 2);
}
//Declara funcion bin a dec
long int bin2dec(int n) {
    if (n == 0) {
        return n;
    }
    return n % 10 + 2 * bin2dec(n /10);
} 
//Declara Hexadecimal a Decimal
int hex2dec(const std::string &hex) {
    int decimal = 0;
    int base = 1;
    bool verificacion=true;

    for (int i = hex.size() - 1; i >= 0; i--) {
        char digit = hex[i];
        int value;

        if (digit >= '0' && digit <= '9') {
            value = digit - '0';
        } else if (digit >= 'A' && digit <= 'F') {
            value = 10 + (digit - 'A');
        } else if (digit >= 'a' && digit <= 'f') {
            value = 10 + (digit - 'a');
        } else {
            verificacion==false;
            return 0;
            
            break;
        }

        decimal += value * base;
        base *= 16;
    }

    return decimal;
}
//Abre funcion principal
int main()
{
    int slcase, n;//Declara variables
    bool ComprobarNum=true;//Declara variable
    cout<<"1  Decimal a Binario"<<endl;//Imprime mensaje
    cout<<"2  Binario a Decimal"<<endl;//Imprime mensaje
    cout<<"3  Decimal a Hexadecimal"<<endl;//Imprime mensaje
    cout<<"4  Hexadecimal a Decimal"<<endl;//Imprime mensaje
    cout<<"Ingresa una Opción"<<endl;//Imprime mensaje
    cin>>slcase;//Lee entrada de datos
    
    switch(slcase)//Abre switch
    {
        //Abre case
    case 1:{
        cout<<"Ingresa un numero decimal"<<endl;//Imprime mensaje
        cin>>n;//Lee entrada de datos
        //Abre condicional de manejo de errores
        if(std::isdigit(n)){

        cout<<dec2bin(n)<<endl;//Invoca funcion
        return 0;//Returna funcion a 0
    }
    //Abre condicional
    else{
        cout<<"No es posible ingresar letras"<<endl;//Imprime mensaje
        return 0;//returna funcion a 0
    }
    }
    //Abre case
    case 2:{
        cout<<"Ingresa un Binario"<<endl;//Imprime mensaje
        cin>>n;//Leer entrada de datos
        //Abre condicional de manejo de errores
        if(std::isdigit(n)){
        std::string numerodecaracteres,limite;//Declara variables de tipo chaar
        numerodecaracteres=std::to_string(n);//Asigna valor a las variables string
        if (numerodecaracteres.length()<10){//Abre condicional que limita numero de caracteres
           cout<<bin2dec(n)<<endl;//Invoca funcion
           return 0;//Returna funcion 0
           
        }
        //Abre contracondicional
        else{
            cout<<"Error, solamente se pude ingresar binarios de 10 digitos"<<endl;//Imprime mensaje
            return 0;//Returna funcion a 0
        }
         }
         //abre contracondicional
        else{
        cout<<"No se pueden ingresar caracteres solo numeros binarios"<<endl;//Imprime mensaje
        return 0;//Returna funcion a 0
        }
    }
    //Abre case
    case 3:{
        cout<<"Ingresa un numero decimal"<<endl;//Imprime mensaje
        cin>>n;//Lee entrada de datos
        //Abre condicional de manejo de errores
        if(std::isdigit(n)){
        cout<<dec2hex(n)<<endl;//Invoca funcion
        return 0;//Returna funcion a 0
        }
        
        //Abre contracondicional
        else{
            cout<<"No se puede ingresar caracteres solo numeros decimales"<<endl;//Improme mensaje
        }
    }
    //Abre case
case 4:{
    std::string hexString;//Declara funcion
    bool verificacion=true;//Declara variable para manejo de erores
    cout << "Ingresa un número hexadecimal: ";//imprime mensaje
    cin >> hexString;//Lee entrada de datos
    //Abre condicional para manejo de erroes
    if (verificacion==false){
        //abre try
    try {
        int decimalValue = hex2dec(hexString);//invoca funcion
        cout << "El valor decimal es: " << decimalValue << endl;//imprime mensaje
        //Cierra try
    } catch (const std::invalid_argument &ex) {
        cerr << ex.what() <<endl;//Cierra argumento
    
return 0;        //Returna funcion a 0 
    }
    }
    //Abre contracondicional
    else{
        cout<<"El numero Hexadecimal que ingresaste es invalido"<<endl;//Imprime mensaje
    return 0;//Returna funcion a 0
    }

}
//Abre case default
default:{
    cout<<"Opcion Invalida"<<endl;//Imprime mensaje
}
}
    return 0;//Returna funcion a 0
}

