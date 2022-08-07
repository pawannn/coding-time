#include<stdio.h>
#define SIZE 5

void selectionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int arr[SIZE] = {40, 15, 20, 10, 30};
    int i;
    
    printf("Array before selection Sort : ");
    for(i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    
    selectionSort(arr, SIZE);
    
    printf("\nArray After selection Sort : ");
    for(i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
}