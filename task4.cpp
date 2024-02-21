#include <iostream>

int sum (int x ,int y ){
    
    return x + y;
}

int sub (int x ,int y ){
    
    return x - y;
}

int mul (int x ,int y ){
    
    return x * y;
}

int div0 (int x ,int y ){
    
    return x / y;
}





int main() {

    std::cout<< sum(1,2)<<std::endl;
    std::cout<< sub(5,2)<<std::endl;
    std::cout<< mul(3,3)<<std::endl;
    std::cout<< div0(15,5)<<std::endl;

    return 0;
}

