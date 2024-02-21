#include <iostream>

int main() {
    int score;
    std::cout << "Enter sqore :";
    std::cin >> score;
    

    if(score < 0){
        std::cout << "Negative number";
        
    }

    else{

    switch(score) {
        case 0 ... 20: 
            std::cout << "F";
            break;
        case 21 ... 40: 
            std::cout << "D";
            break;
        case 41 ... 60:
            std::cout << "C";
            break;
        case 61 ... 80:
            std::cout << "B";
            break;
        
        case 81 ... 100:
            std::cout << "A";
            break;

        
    }
    }
    return 0;

    
}

