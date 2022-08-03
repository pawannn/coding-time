#include<stdio.h>

#define SIZE 5

int binarySearch(int arr[], int start, int end, int key){
    while(start <= end){
        int mid = (start+end)/2;
        
        if(arr[mid] == key){
            return 1;
        }
        
        if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    
    return 0;
}

int main(){
    int arr[SIZE] = {10,20,30,40,50};
    int start = 0;
    int end = SIZE - 1;
    if(binarySearch(arr, 0, end, 20) == 1){
        printf("Element is found");
    }
    else{
        printf("Element Not found");
    }
    
}