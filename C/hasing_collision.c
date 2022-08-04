#include<stdio.h>
#define SIZE 5

int arr[5];

void init(){
    for(int i = 0; i < SIZE; i++){
        arr[i] = -1;
    }
}

int deleteElement(int val){
    int key = val % SIZE;
    int index = key;
    while(arr[index] != val){
        index = (index + 1) % SIZE;
        if(arr[index] == key){
            printf("Element not found \n");
            return 0;
        }
    }
    arr[index] = -1;
    return 1;
}

int search(int val){
    int key = val % SIZE;
    int index = key;
    while(arr[index] != val){
        index = (index + 1) % SIZE;
        if(index == key){
            printf("Element not found\n");
            return 0;
        }
    }
    printf("(Element found at index : %d)\n", index);
    return 1;
}

int insert(int val){
    int key = val % SIZE;
    int index = key;
    while(arr[index] != -1){
        index = (index + 1) % SIZE;
        if(index == key){
            printf("The hash table is full \n");
            return 0;
        }
    }
    
    arr[index] = val;
    return 1;
}

int main(){
    init();
    
    insert(2);
    insert(1);
    insert(15);
    insert(11);
    insert(9);
    //15 1 2 11 9
    
    printf("Ater element insertion : ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]); //1
    }
    printf("\n");
    
    deleteElement(9); //15 1 2 11 -1
    
    printf("Ater element deletion : ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", arr[i]); //1
    }
    
    printf("\n \nSearch for element 2 : ");
    search(2); //element found
    
    
}