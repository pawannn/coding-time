#include<stdio.h>
#include<stdlib.h>


struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node *getNewNode(int val){
    struct node *newNode = malloc(sizeof(struct node));

    newNode -> data = val;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
};

struct node *insertNode(struct node *root, int val){
    if(root == NULL){
        return getNewNode(val);
    }
    if(val < root -> data){
        root -> left = insertNode(root -> left, val); 
    }
    if(val > root -> data){
        root -> right = insertNode(root -> right, val);
    }
    return root;
};

int main(){
    struct node *root = NULL;
    root = insertNode(root, 100);
    root = insertNode(root, 50);
    root = insertNode(root, 150);
    root = insertNode(root, 125);
}