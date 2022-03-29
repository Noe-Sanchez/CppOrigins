
#include <iostream>

double arrd[5] = {1.1,2.1,3.1,4.1,5.1};
int arri[10] = {1,2,3,4,5,6,7,8,9,10};

double restarr(const double data[],int size,double rest = 0){
    
    for(int i = size; i >= 0; i--){
       rest -= data[i];
    }
    return rest;
    
}

int restarr(const int data[],int size,int rest = 0){
    
    for(int i = size; i >= 0; i--){
       rest -= data[i];
    }
    return rest;
    
}

template<typename arrtemp>

void arrelem(const arrtemp data[],int size){
    std::cout << "Elements of array: ";
    for(int i = 0; i < size; i++){
        std::cout << data[i] << ", ";
    }
}

int main()
{
    std::cout << restarr(arrd,5) << std::endl;
    arrelem(arrd,5);
    std::cout << std::endl;
    std::cout << restarr(arri,10) << std::endl;
    arrelem(arri,10);
    return 0;
}
