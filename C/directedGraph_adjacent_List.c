#include<stdio.h>
#include<stdlib.h>
#define size 5

struct node{
    int data;
    struct node *next;
};

struct node *adjList[size];

void init(){
    for(int i = 0; i < size; i++){
        adjList[i] = NULL;
    }
}

void addEdge(int src, int dest){
    struct node *newNode = malloc(sizeof(struct node));
    newNode -> data = dest;
    newNode -> next = NULL;
    if(adjList[src] == NULL){
        adjList[src] = newNode;
    }
    else{
        struct node *last = adjList[src];
        while(last -> next != NULL){
            last = last -> next;
        }
         last -> next = newNode;
    }
}

void printList(){
    for(int i = 0; i < size; i++){
        struct node *temp = adjList[i];
        printf("adjList[%d]->",i);
        while(temp != NULL){
            printf("%d -> ",temp -> data);
            temp = temp -> next;
        }
        printf("NULL");
        printf("\n");
    }
}

void removeEdge(int src, int dest){
    if(adjList[src] == NULL){
        return;
    }
    if(adjList[src] -> data == dest){
        struct node *temp = adjList[src];
        adjList[src] = adjList[src] -> next;
        free(temp);
    }
    else{
        struct node *current = adjList[src], *temp;
        while(current -> next != NULL){
            if(current -> next -> data == dest){
                temp = current -> next;
                current -> next = temp -> next;
                free(temp);
            }
            current = current -> next;
        }
    }
    
}

int hasEdge(int src, int dest){
    struct node *temp = adjList[src];
    while(temp != NULL){
        if(temp -> data == dest){
            return 1;
        }
        temp = temp -> next;
    }
    return 0;
}

int main(){
    init(adjList);
    
    addEdge(0,1);
    addEdge(0,2);
    addEdge(0,3);
    addEdge(1,3);
    addEdge(1,4);
    addEdge(2,3);
    addEdge(3,4);
    
    printf("\nGraph : \n");
    printList();
    
    removeEdge(0,2);
    printf("\nGraph : \n");
    printList();
    
    if(hasEdge(0,1) == 1){
        printf("Edge Found");
    }
    else{
        printf("Edge not found");
    }
}