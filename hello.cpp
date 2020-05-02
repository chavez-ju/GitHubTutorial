#include <iostream>

int division(const int &x, const int &y){
    return x / y;
}

int main(){
    std::cout << "Hello World!" << std::endl;
    int x = 7;
    int y = 3;
    std::cout << division(x, y) << std::endl;
}