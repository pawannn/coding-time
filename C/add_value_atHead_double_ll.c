#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertFront(int val){
    struct node *newval;
    newval = malloc(sizeof(struct node));
    newval -> data = val;
    if(head == NULL){
        newval -> prev = NULL;
        newval -> next = NULL;
        head = newval;
    }
    else{
        newval -> prev = NULL;
        newval -> next = head;
        head = newval;
    }
}

int main(){
    insertFront(10);
    insertFront(20);

    printf("Traversing Forward : \n");
    struct node *forward = head;

    while(forward != NULL){
        printf("%d ", forward -> data);
        forward = forward -> next;
    } 
}