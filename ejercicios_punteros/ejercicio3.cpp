#include <iostream>

void modificar(int* ptr){
    *ptr=12;
}

int main()
{
    int a;
    a=5;
    modificar(& a);
    std::cout<<a<<std::endl;




    return 0;
}