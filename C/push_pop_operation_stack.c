#include<stdio.h>
#define size 3

int arr[size];
int top = -1;

void push(int val){
    if(top == size - 1){
        printf("\nstack is full");
    }
    else{
        ++top;
        arr[top] = val;
    }
}

void pop(){
    if(top == -1){
        printf("\nstack is empty");
    }
    else{
        printf("\nThe popped element is : %d", arr[top]);
        top --;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    
    printf("\nElements in stack are : ");
    for(int i=0; i<= top; i++){
        printf("%d ", arr[i]);
    }
    
    pop();
    pop();
    pop();
    pop();
    
}