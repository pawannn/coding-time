#include<stdio.h>
#define SIZE 5

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int flag = 0;
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag += 1;
            }
        }
        if(flag == 0){
            break;
        }
    }
}

int main(){
    int arr[SIZE] = {40, 15, 20, 10, 30};
    int i;
    
    printf("Array before bubble Sort : ");
    for(i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    
    bubbleSort(arr, SIZE);
    
    printf("\nArray After bubble Sort : ");
    for(i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
}