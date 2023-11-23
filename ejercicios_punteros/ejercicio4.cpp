#include <iostream>

int main(){
    const char* mes="Hello World";

    std::cout<<mes<<std::endl;

    for(int i=0;i<11;i++){
        std::cout<<*mes<<std::endl;
        mes++;

    }












    return 0;
}