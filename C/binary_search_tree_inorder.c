#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node *getNode(int val){
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    
    newNode -> data = val;
    newNode -> left = NULL;
    newNode -> right = NULL;
}

struct node *insertNode(struct node *root, int val){
    if(root == NULL){
        return getNode(val);
    }
    if(val < root -> data){
        root -> left = insertNode(root -> left, val);
    }
    else if(val > root -> data){
        root -> right = insertNode(root -> right, val);
    }
    return root;
    
}

void inorder(struct node *root){
    if(root == NULL){
        return;
    }
    inorder(root -> left);
    printf("%d ", root -> data);
    inorder(root -> right);
}

int main(){
    struct node *root = NULL;
    root = insertNode(root, 100);
    root = insertNode(root, 50);
    root = insertNode(root, 150);
    root = insertNode(root, 125);
    
    inorder(root);
}