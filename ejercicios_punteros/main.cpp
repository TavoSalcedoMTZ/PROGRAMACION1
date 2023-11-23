#include <iostream>

int main(){
    int a,*b=&a;

    a=5;
    *b=6;

    std::cout<<a<<std::endl;





    return 0;
}