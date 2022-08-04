#include<stdio.h>
#define SIZE 5

int arr[SIZE];

void init(){
    for(int i = 0; i < SIZE; i++){
        arr[i] = -1;
    }
}

int insert(int val){
    int key = val % SIZE;
    int index = key;
    int i = 1;
    
    while(arr[index] != -1){
        index = (val + (i*i)) % SIZE;
        if(index == key){
            printf("\nThe hash table is full\n");
            return 0;
        }
        i++;
    }
    
    arr[index] = val;
    return 1;
}

int main(){
    
    init();
    
    insert(2);
    insert(10);
    insert(6);
    insert(9);
    insert(7);
    
    for(int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]);
    }
}