//Adding new node in front in linked list.

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head;

void addFirst(int val){
    struct node *newval;
    newval = malloc(sizeof(struct node));
    newval -> data = val;
    newval -> next = head;
    
    head = newval;
}

int main(){
    head = malloc(sizeof(struct node));
    head -> data = 10;
    head -> next = NULL;
    
    addFirst(10);
    
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}