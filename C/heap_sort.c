// Online C compiler to run C program online
#include <stdio.h>

int arr[7] = {50, 30, 60, 10, 20, 40, 80};

void swap(int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

void heapify(int arr[], int index, int size){
    int left = index * 2 + 1;
    int right = left + 1;
    
    int max = index;
    
    if(left <= size && arr[left] > arr[max]){
        max = left;
    }
    
    if(right <= size && arr[right] > arr[max]){
        max = right;
    }
    
    if(index != max){
        swap(index, max);
        heapify(arr, max, size);
    }
} 

void buildhead(int arr[], int size){
    for(int i = size/2; i >= 0; i--){
        heapify(arr, i, size);
    }
}

void heapSort(int arr[], int size){
    buildhead(arr, size);
    
    while(size > 0){
        
        int temp = arr[size];
        arr[size] = arr[0];
        arr[0] = temp;
        
        size--;
        
        heapify(arr, 0, size);
        
    }
}

int main() {
    
    int size = 6;
    heapSort(arr, size);
    
    for(int i =0; i < size+1; i++){
        printf("%d ", arr[i]);
    }
    
}