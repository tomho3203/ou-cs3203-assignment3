#include <iostream>
#include <vector>
#include <algorithm>

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

//reverse array order
std::vector<int> reverse(std::vector<int> arr){
    int temp;
    for(int i =0; i<arr.size()/2;i++){
        temp = arr[i];
        arr[i]=arr[arr.size()-i-1];
        arr[arr.size()-i-1]=temp;
    }
    return arr;
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