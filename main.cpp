#include <iostream>

//computes the sum of an array and returns
int sum(int arr[]){
    int length = sizeof(arr) / sizeof(int);
    int sum = 0;
    for(int i =0; i <= length; i++ ){
        sum += arr[i];
    }
    return sum;
}

//computes the product of an array and returns
int product(int arr[]){
    int length = sizeof(arr) / sizeof(int);
    int product = 1;
    for(int i =0; i <= length; i++ ){
        product *= arr[i];
    }
    return product;
}
