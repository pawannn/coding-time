#include<stdio.h>
#include<stdlib.h>

int main(){
    struct node{
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

    head -> next = middle;
    middle -> next = last;
    last -> next = head;

    printf("Printing Circular Linked List : \n");

    struct node *temp = head;
    do {
        printf("%d ", temp -> data);
        temp = temp -> next;
    } while(temp != head);
}