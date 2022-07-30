#include<stdio.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL, *rear = NULL;

void enqueue(int val){
    struct node *newNode = malloc(sizeof(struct node));
    newNode -> data = val;
    newNode -> next = NULL;
    if(head == NULL && rear == NULL){
        head = rear = newNode;
    }
    else{
        rear -> next = newNode;
        rear = newNode;
    }
}

void dequeue(){
    if(head == NULL){
        printf("\nQueue is empty");
    }
    else{
        printf("%d ", head -> data);
        struct node *temp;
        temp = head;
        head = temp -> next;
        free(temp);
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