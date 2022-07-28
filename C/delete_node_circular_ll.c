#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void addNode(int val){
    if(head == NULL){
        head = malloc(sizeof(struct node));
        head -> data = val;
        head -> next = head;
    }
    else{
        struct node *newNode;
        newNode = malloc(sizeof(struct node));
        newNode -> data = val;
        
        struct node *temp = head;
        if(temp == head && temp -> next == head){
            head -> next = newNode;
            newNode -> next = head;
        }
        else{
            while(temp -> next == head){
                temp = temp -> next;
            }
            
            temp -> next ->  next = newNode;
            newNode -> next = head;
        }
    }
}

void deleteNode(struct node **head, int key){
    if(*head == NULL){
        printf("list is empty");
    }
    struct node *temp = *head;
    if((*head)-> data == key && (*head) -> next == *head){
        free(*head);
        *head = NULL;
    }
    else if((*head) -> data == key){
        struct node *last = *head, *temp;
        while(last -> next != *head){
            last = last -> next;
        }

        temp = *head;
        last -> next = temp -> next;
        *head = (*head) -> next;
        free(temp);
    }
    else{
        struct node *current = *head, *temp;
        while(current -> next != *head){
            if(current -> next -> data == key){
                temp = current -> next;
                current -> next = temp -> next;
                free(temp);
                break;
            }
            current = current -> next;
        }
    }
    
}

int main(){
    addNode(10);
    addNode(20);
    addNode(30);
    
    int key = 30;
    deleteNode(&head, key);
    
    struct node *temp = head;
    do{
        printf("%d ", temp -> data);
        temp = temp -> next;
    }while(temp != head);
}