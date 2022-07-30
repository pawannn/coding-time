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

int getRightMin(struct node *root){
    struct node *temp = rootl
    while(temp -> left != NULL){
        temp = temp -> left;
    }
    return temp -> data;
}

int deleteNode(struct node *root, int key){
    if(root == NULL){
        return;
    }
    if(key < root -> data){
        root -> right = deleteNode(root -> right, key);
    }
    if(key > root -> data){
        root -> left = deleteNode(root -> left, key);
    }
    else{
        struct node *temp;
        if(root -> left == NULL && root -> right == NULL){
            free(root);
            return NULL;
        }
        else if(root -> left == NULL){
            temp = root -> right;
            free(root);
            return temp;
        }
        else if(root -> right == NULL){
            temp = root -> left;
            free(root);
            return temp;
        }
        else{
            int rightMin = getRightMin(root -> right);
            root -> key = rightMin;
            root -> right = deleteNode(root -> right, rightMin);
        }
    }
    return root;
}


int main(){
    struct node *root = NULL;
    root = insertNode(root, 100);
    root = insertNode(root, 50);
    root = insertNode(root, 150);
    root = insertNode(root, 125);
    
    deleteNode(root, 150);
}