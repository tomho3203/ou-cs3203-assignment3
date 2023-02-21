#include <iostream>
#include <vector>

//computes the sum of an array and returns
int sum(std::vector<int> arr){
    int sum = 0;
    for(int i =0; i <= arr.size(); i++ ){
        sum += arr[i];
    }
    return sum;
}

//computes the product of an array and returns
int product(std::vector<int> arr){
    int product = 1;
    for(int i =0; i < arr.size(); i++ ){
        product *= arr[i];
    }
    return product;
}

int main(){
    std::vector<int> nums;
    int x;
    std::cout<< "Enter a numbers into the array: "<<std::endl;
    while(std::cin >> x){
        nums.push_back(x);
    }

    std::cout<< "Sum of array: "<<std::endl;
    std::cout<< sum(nums) <<std::endl;
    std::cout<< "Product of array: "<<std::endl;
    std::cout<< product(nums) <<std::endl;
    return 0;
}