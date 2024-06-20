#include <iostream>
#include <cstring>

int main(){
    char str[] = "Hello";
    std::cout << strlen(str) << std::endl;

    char dest[6];
    strcpy(dest, str);
    std::cout << "Destination string: "<< dest << std::endl;

    char str2[] = " C++!!!!!!!!!!!";
    strcat(str, str2);
    std::cout <<"Concatenated string: "<< str << std::endl;

    int result = strcmp(str, str2);
    if(result == 0){
        std::cout <<"String are equal. " << std::endl;
    }else{
        std::cout <<"String are not equal. " << std::endl;
    }
    return 0;
}