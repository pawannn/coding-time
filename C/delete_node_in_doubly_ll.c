#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head, *middle, *last;

void delNode(struct node **head, int key){
    if(*head == NULL){
        return;
    }

    struct node *temp = *head;
    while(temp != NULL){
        if(temp ->data == key){
            break;
        }
        temp = temp -> next;
    }

    if(temp ==NULL){
        printf("Key Not Found"); 
    }

    if(temp == *head){
        (*head) -> next -> prev = NULL;
        *head = (*head) -> next;
        free(temp);
    }
    else if(temp -> next == NULL){
        temp -> prev -> next = NULL;
        last = temp -> prev;
        free(temp);
        
    }
    else{
        temp -> prev -> next = temp -> next;
        temp -> next -> prev = temp -> prev;
        free(temp);
    }
}

int main(){

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

    int key = 30;
    delNode(&head, key);

    printf("Forward Traverse : \n");
    struct node *forward = head;
    while(forward != NULL){
        printf("%d ", forward -> data);
        forward = forward -> next;
    }

    printf("\nBackward Traverse : \n");
    struct node *back = last;
    while(back != NULL){
        printf("%d ", back -> data);
        back = back -> prev;
    }
}