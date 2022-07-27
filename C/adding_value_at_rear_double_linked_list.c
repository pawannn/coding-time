#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertRear(int val){
    struct node *newval;
    newval = malloc(sizeof(struct node));
    
    newval -> data = val;

    if(head == NULL){
        newval -> prev = NULL;
        newval -> next = NULL;
        head = newval;
    }
    else{
        struct node *lastNode = head;
        while(lastNode -> next != NULL){
            lastNode = lastNode -> next;
        }
        
        lastNode -> next = newval;
        newval -> prev = lastNode;
        newval -> next = NULL;
    }
}

int main(){
    insertRear(10);
    insertRear(20);

    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}