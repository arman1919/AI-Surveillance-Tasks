#include <iostream>

int main() {

    int a = 15;
    
    int *pointer  = &a;
    
    int &ref = a;

      
    *pointer = 20;
    std::cout << a<< std::endl;

    ref  = 30;

    std::cout << a;

    return 0;
}