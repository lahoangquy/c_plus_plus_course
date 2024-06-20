#include <iostream>

int globalVariable = 20;

static int staticGlobalVariable = 100;
void function(){
    int localVariable = 10;
    std::cout << "localVariable: " << localVariable << std::endl;

    std::cout << "globalVariables in the function: " << globalVariable << std::endl;

    static int staticVariable = 0;
    staticVariable++; // increment
    std::cout << "staticVariable: " << staticVariable << std::endl;
    std::cout <<"Staitc Global Variable: " <<staticGlobalVariable << std::endl;
}
int main() {
    function();
    //local variables are not accessible in here
     std::cout << "globalVariable in the main function: " << globalVariable << std::endl;
    return 0;
}