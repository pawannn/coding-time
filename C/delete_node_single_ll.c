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
        struct node *current = *head;
        while(current -> next != NULL){
            if(current -> next -> data == val){
                element = current ->next;
                current -> next = current ->next ->next;
                free(element);
                break;
            }
            else{
                current = current -> next;
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

    int key = 30;
    delNode(&head, key);
    
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
}