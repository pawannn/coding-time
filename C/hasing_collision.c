#include<stdio.h>
#define SIZE 5

int arr[5];

void init(){
    for(int i = 0; i < SIZE; i++){
        arr[i] = -1;
    }
}

void insert(int key){
    int index = key % SIZE;
    if(arr[index] == -1){
        arr[index] = key; 
    }
    else{
        for(int i = 0; i < SIZE; i++){
            index = (key + i) % SIZE;
            if(arr[index] == -1){
                arr[index] = key;
                break;
            }
        }
    }
}

int main(){
    init();
    
    insert(2);
    insert(1);
    insert(15);
    insert(11);
    insert(9);
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
    
    
}