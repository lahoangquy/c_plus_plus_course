
void displayMessage(){
    std::cout <<"Hello world" <<std::endl;
}

// primitive data types
int add(int a, int b){
    return a + b;
}

//user defined types
struct Point(){
    int x,,y;
}
Point createPoint(int x,int y){
    return {x,y}
}
// references
int& getElement(int arr[], int index){
    return arr[index];
}

//Pointers
int* allocateMemory(){
    return new int[10];
}

//std::string`
std:string getGreeting(){
    return "Hello world";
}

// std::vector and other STL containers
std::vector<int> getNumbers(){
    return {1,2,3,4,5,6,7,8,9,10};
}

//std::tupes and std::pair

std::pair<int, int> getMinMax(const std::vector<int>& numbers){
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    return {min,max};
}