#include <iostream>


void increment(int& num) {
    num++;
}

int& getElement(int arr[], int index){
    return arr[index];
}

void printValue(const int& num) {
    std::cout<<"Value: "<<num<<std::endl;
}

int main(){
    int a = 10;
    int& ref = a; // ref is a reference to a variable
    std::cout << "a = " << a << std::endl;
    std::cout << "ref = " << ref << std::endl;

    ref = 20; // changing ref will change a
    std::cout << "a = " << a << std::endl;
    std::cout << "ref = " << ref << std::endl;
    int value = 5;
    increment(value); // Pass value by reference
    std::cout <<"Value after increment: " << value << std::endl;

    int array[5] = {1,2,3,4,5};
   getElement(array,2) = 10; // We will modify the third element
   std::cout <<"array[2]: " << array[2] << std::endl;

   int value1 = 5;
   printValue(value1); // Pass value by const reference
    return 0;
}

