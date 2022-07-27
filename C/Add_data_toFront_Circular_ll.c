#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head, *middle, *last;

void addFront(int val){
    if(head == NULL){
        head -> data = val;
        head -> next = head;
    }
    else{
        struct node *newNode;
        newNode = malloc(sizeof(struct node));

        newNode -> data = val;
        struct node *temp = head;
        while(temp -> next != head){
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode -> next = head;
        head = newNode;
    }
}

int main(){
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head -> data = 10;
    middle -> data = 20;
    last -> data = 30;

    head -> next = middle;
    middle -> next = last;
    last -> next = head;

    addFront(10);

    printf("Printing Circular Linked List : \n");

    struct node *temp = head;
    do {
        printf("%d ", temp -> data);
        temp = temp -> next;
    } while(temp != head);
}