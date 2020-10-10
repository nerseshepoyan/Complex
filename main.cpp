#include <iostream>
#include "complex.cpp"


int main(){
    Complex number1(3,5), number2(5,6);
    Complex number3;
    Complex number4(3,7);
    std::cout<<"number1 is: "<<number1;
    std::cout<<"number2 is: "<<number2;
    std::cout<<"number3 is: "<<number3;
    std::cout<<"number4 is: "<<number4;
    number3 + number2 + number1;
    std::cout<<"number3 after addition(number1+number2): "<<number3; 
    std::cout<<"result number2 multiply by 6: "<<number2*6; 
    std::cout<<"abs of number1: "<<number1.abs()<<std::endl;
    const int size = 4;
    Complex arr[size] = {number1, number2, number3, number4};
    sort(arr, size);
    std::cout<<"Numbers after sorting: "<<std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout<<arr[i];
    }   
    return 0;
}
