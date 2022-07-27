//Add node at last of Linked List.

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

void addLast(int val){
    struct node *newval;
    newval = malloc(sizeof(struct node));
    newval -> data = val;
    newval -> next = NULL;
    
    struct node *lastNode = head;
    while(lastNode -> next != NULL){
        lastNode = lastNode -> next;
    }
    
    lastNode -> next = newval;
}

int main(){
    head = malloc(sizeof(struct node));
    head -> data = 10;
    head -> next = NULL;
    
    addLast(9);
    
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}