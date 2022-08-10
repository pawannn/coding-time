#include<stdio.h>
#define SIZE 5

int partition(int arr[], int start, int end){
    int pIndex = start;
    int pivot = end;
    int temp, i;
    for(i = 0; i < end; i++){
        if(arr[i] < pivot){
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    
    temp = arr[pIndex];
    arr[pIndex] = arr[pivot];
    arr[pivot] = temp;
    return pIndex;
}

void QuickSort(int arr[], int start, int end){
    if(start < end){
        int pIndex = partition(arr, start, end);
        QuickSort(arr, start, pIndex - 1);
        QuickSort(arr, pIndex + 1, end);
    }
}

int main(){
    int arr[SIZE] = {10, 25, 3, 50, 20};
    QuickSort(arr, 0, SIZE-1);
    
    for(int i  = 0; i < SIZE; i++){
        printf("%d \n", arr[i]);
    }
}