#include <cstdarg>
#include <iostream>

//Value parameter
void modifyValue(int value){
    value= 10; // This change will not affect the original argument
}
//reference parameter
void modifyValue(double &value){
    int value = 10; //This change will affect the original argument
}

// Constant reference parameters

void modifyValue(const double &value){
    std::cout<<value<<std::endl;
    // value = 10; // Error : can not modify a const reference
}

// Pointers parameters

void modifyValue(int *value){
    *value = 10; // This change will affect the original argument
}
//Default parameters
void modifyValue(int a = 1, int b =2){
    std::cout<< 'a: ' << a << ', b: ' << b << std::endl;
}
//variadic parameters
void printNumbers(int count, ...){
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++){
        int num = va_arg(args, int);
        std::cout <<num<<" ";
    }
    va_end(args);
    std:cout <<std::endl;
}