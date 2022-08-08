#include<stdio.h>
#define SIZE 5

void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int value = arr[i];
        int index = i;
        while(index > 0 && arr[index - 1] > value){
            arr[index] = arr[index - 1];
            index--;
        }
        
        arr[index] = value;
    }
}

int main(){
    int arr[SIZE] = {40, 10, 20, 50, 30};
    
    insertionSort(arr, SIZE);
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
}