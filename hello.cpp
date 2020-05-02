#include <iostream>

int mult(const int &x, const int &y){
    return x * y;
}

int main(){
    std::cout << "Hello World!" << std::endl;
    int x = 7;
    int y = 3;
    std::cout << mult(x, y) << std::endl;
}