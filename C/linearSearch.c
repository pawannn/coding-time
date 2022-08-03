#include<stdio.h>

#define SIZE 5

int linearSearch(int arr[], int size,  int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int arr[SIZE] = {10,39,12,50,6};
    int key = 6;
    if(linearSearch(arr, SIZE, key) == 1){
        printf("page is found");
    }
    else{
        printf("page is not found");
    }
}

//time complexity = best Case : O(1) , worst Case : O(n)