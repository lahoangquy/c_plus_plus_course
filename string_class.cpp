#include <iostream>
#include <string>

int main(){
    // Declaration and initialization
    std::string str1 ="Hello, World!";
    std::string str2("Hello, World");
    std::string str3;
    str3 = "Hello World!";

    std::cout << str1 << std::endl;
     std::cout << str2 << std::endl;
      std::cout << str3 << std::endl;
      std::cout << "Length: " << str1.length() << std::endl;
      std::string str ="";
      if(str.empty()){
        std::cout << "String is empty!" << std::endl;
      }

      std::string str4 = "Hello";
      str4.append(", C++!");
      std::cout << str4 << std::endl;

      std::string str5 = "Hello";
      str5 += (", Tom!");
      std::cout << str5 << std::endl;

      std::string sub = str1.substr(1,3);
      std::cout << sub << std::endl;

      std::size_t pos = str1.find("World");
      if(pos != std::string::npos){
        std::cout <<" Found World at position " <<pos <<std::endl;
      }
      str2.replace(1,3, "Ing");
      std::cout << str2 << std::endl;

      if(str1.compare(str2) == 0){
        std::cout << " Strings are equal " <<std::endl;
      }else{
            std::cout << " Strings are not equal " <<std::endl;
      }

      const char *cstr = str1.c_str();
      std::cout << cstr << std::endl;
}