#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int val){

    struct node *newNode;
    newNode = malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> next = head;
    head = newNode;
}

void pop(){
    if(head == NULL){
        printf("\nstack is empty");
    }
    else{
        printf("\npopped element : %d", head -> data);
        struct node *temp = head;
        head = head -> next;
        free(temp);
    }
}

int main(){
    push(2);
    push(3);
    push(4);
    push(5);
    
    struct node *temp = head;
    printf("\nElements of stack are : \n");
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp ->  next;
    }
    
    pop();
    pop();
    pop();
    pop();
    pop();
}