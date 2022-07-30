#include<stdio.h>
#define size 3

int arr[size];
int head = 0, rear = 0;
void enqueue(int val){
    if(rear == size){
        printf("queue is full");
    }
    else{
        arr[rear] = val;
        rear++;
    }
}

void dequeue(){
    if(head == rear){
        printf("\nstack is empty");
    }
    else{
        printf("\ndequeuing element : %d", arr[head]);
        head ++;
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
}