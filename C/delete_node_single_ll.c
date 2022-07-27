#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void delNode(struct node **head, int val){
    struct node *element = *head;
    if((*head) -> data == val){
        element = *head;
        *head = (*head) -> next;
        free(element);
    }
    else{
        struct node *previous;
        while(element -> next != NULL){
            if(element -> data == val){
                previous -> next = element -> next;
                free(element);
                break;
            }
            else{
                previous = element;
            }
        }
    }
}

int main(){
    
    struct node *head, *middle, *last;
     
    head = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head -> data = 10;
    middle -> data = 20;
    last -> data = 30;

    head -> next = middle;
    middle -> next = last;
    last -> next = NULL;

    int key = 10;
    delNode(&head, key);
    
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}