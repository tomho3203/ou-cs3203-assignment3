#include <iostream>
int sum( int arr[]){
    int length = sizeof(arr) / sizeof(int);
    int sum = 0;
    for(int i =0; i <= length; i++ ){
        sum += arr[i];
    }
    return sum;
}



