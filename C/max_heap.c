// Online C compiler to run C program online
#include <stdio.h>

int arr[6] = {10,30,5,40,90,60};

void swap(int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}

// void deleteElement(int arr[],int size, int key){
//     int keyindex, lastele = size - 1;
//     for(int i = 0; i < size ; i++){
//         if(arr[i] == key){
//             keyindex = i;
//             break;
//         }
//     }
//     swap(keyindex, lastele);
//     size = size - 1;
//     heapify(arr, keyindex, size);
    
// }
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

int main() {
    buildhead(arr, 6);
    
    for(int i =0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    
}