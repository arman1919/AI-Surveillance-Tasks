#include <iostream>

int max_num(int* nums, int size){
    int max = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }
    return max;
}

int min_num(int* nums, int size){
    int min = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}

double midle_num(int *nums, int size){
    double mid = 0;
    for (int i = 0; i < size; i++) {
        mid += nums[i];
    }
    return mid / size;
}

int main() {
    int nums[5] = {4,2,1,5,3};    
    std::cout << max_num(nums, 5) << std::endl;
    std::cout << min_num(nums, 5) << std::endl;
    std::cout << midle_num(nums, 5) << std::endl;

    return 0;
}


