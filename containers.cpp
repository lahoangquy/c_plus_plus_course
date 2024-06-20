#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec;

    // Adding elements
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Accessing elements
    std::cout <<"Vector elements: ";
    for(int i=0; i<vec.size(); i++){
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;


    std::cout <<"Using iterator: ";
    for (auto it=vec.begin(); it !=vec.end(); it++){
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;

}