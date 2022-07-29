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
    
    head -> prev = last;
    head -> next = middle;
    middle -> prev = head;
    middle -> next = last;
    last -> prev = middle;
    last -> next = head;
    
    printf("forward traversal : ");
    struct node *forward = head;
    do{
        printf("%d ", forward -> data);
        forward = forward -> next;
    }while(forward != head);
    
    printf("backward traversal : ");
    struct node *lastNode = head -> prev;
    struct node *temp = lastNode;
    do{
        printf("%d ", temp -> data);
        temp = temp -> prev;
    }while(temp != lastNode);
}