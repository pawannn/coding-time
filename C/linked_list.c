// basic implemetation of single linked List in C

#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    //declaring nodes
    struct node *a,*b,*c;

    //Allocating memory for each node
    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));
    c = malloc(sizeof(struct node));

    //assigning data for each node
    a -> data = 100;
    c -> data = 300;
    b -> data = 200;

    //Linking data to each node
    a -> next = b;
    b -> next = c;
    c -> next = NULL;

    //printing data of each node.
    struct node *temp = a;
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}


