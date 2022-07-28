#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void addFront(struct node **head, int val){
    if(*head == NULL){
        *head = malloc(sizeof(struct node));
        (*head) -> data = val;
        (*head) -> next = *head;
    }
    else{
        struct node *newNode, *lastNode = *head;
        newNode = malloc(sizeof(struct node));
        newNode -> data = val;

        while(lastNode -> next != *head){
            lastNode = lastNode -> next;
        }
        
        lastNode -> next = newNode;
        newNode -> next = *head;
        *head = newNode;
    }
}

int main(){
    struct node *head;
    head = NULL;

    addFront(&head, 10);
    addFront(&head, 20);
    addFront(&head, 30);

    printf("traversing froward : ");

    struct node *temp = head;

    do{
        printf("%d ", temp -> data);
        temp = temp -> next;
    }while(temp != head);
}