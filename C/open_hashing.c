#include<stdio.h>
#define SIZE 5

struct node{
    int data;
    struct node *next;
};

struct node *chain[SIZE];

void init(){
    for(int i = 0; i < SIZE; i++){
        chain[i] = NULL;
    }
}

void insert(int data){
    struct node *newNode = malloc(sizeof(struct node));
    newNode -> data = data;
    newNode -> next = NULL;
    
    int key = data % SIZE;
    if(chain[key] == NULL){
        chain[key] = newNode;
    }
    else{
        struct node *temp = chain[key];
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}


int main(){
    init();
    
    insert(1);
    insert(5);
    insert(6);
    insert(9);
    
    printf("\nhash list : \n");
    for(int i = 0; i < SIZE; i++){
        printf("chain[%d] -> ", i);
        struct node *temp = chain[i];
        while(temp != NULL){
            printf("%d -> ", temp -> data);
            temp = temp -> next;
        }
        printf("NULL");
        printf("\n");
    }
    
}