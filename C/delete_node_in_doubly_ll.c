#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void delNode(struct node **head, int key){
    struct node *temp = *head;
    if((*head) -> data == key){
        temp = *head;
        *head = (*head) -> next;
        (*head) -> prev = NULL;
        free(temp);
    }
    else{
        while(temp -> next != NULL){
            if(temp -> data == key){
                temp -> prev -> next = temp -> next;
                temp -> next -> prev = temp -> prev;
            }
            
            temp = temp -> next;
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

    head -> prev = NULL;
    head -> next = middle;
    middle -> prev = head;
    middle -> next = last;
    last -> prev = middle;
    last -> next = NULL;

    int key = 20;
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