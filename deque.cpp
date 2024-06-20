#include <iostream>
#include <deque>

int main(){
    std::deque<int> deq;

    //Adding elements
    deq.push_back(1);
    deq.push_back(2);
    deq.push_back(0);

    // Accessing elements
    std::cout <<"Deque elements: ";
    for(int i=0; i<deq.size(); i++){
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}