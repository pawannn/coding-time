#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node{
        struct node *prev;
        int data;
        struct node *next;
    };

    struct node *head, *middle, *last;
    
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head -> data = 10;
    middle -> data = 20;
    last -> data = 30;

    head -> prev = NULL;
    head -> next = middle;
    middle -> prev = head;
    middle -> next = last;
    last -> prev = middle;
    last -> next = NULL;

    printf("Traversing Forward : \n");
    struct node *forward = head;

    while(forward != NULL){
        printf("%d ", forward -> data);
        forward = forward -> next;
    } 

    printf("\ntraversing backward : \n");
    struct node *backward = last;

    while(backward != NULL){
        printf("%d ", backward -> data);
        backward = backward -> prev;
    }
    
}