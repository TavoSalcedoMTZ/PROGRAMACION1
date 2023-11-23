#include <iostream>

int main(){
int a[]{1, 2, 3 ,4  ,5  ,6
};
 int* ptr=a;


for (int i=0; i<5; i++){
    std::cout<<*ptr<<std::endl;
    ptr++;}
return 0;
}