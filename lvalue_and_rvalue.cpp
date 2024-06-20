
int x = 10;
x = 20;  // 'x' is an lvalue
int* p = &x;  // You can take the address of 'x'


int y = 30;
int* p = &y;
*p = 40;  // '*p' is an lvalue


int arr[3] = {1, 2, 3};
arr[0] = 4;  // 'arr[0]' is an lvalue



int& func(int& ref) {
    return ref;
}
int z = 50;
func(z) = 60;  // 'func(z)' is an lvalue



int x = 10; // 10 is an r value


int y = x+10; // x+10 is an rvalue


int func(){
    return 42;
}
int z = func(); // func() is an rvalue


int x = 10;
int& ref = x; //ref is an lvalue reference to x

int&& temp = 20; // temp is an rvalue reference to the temporary rvalue '20'