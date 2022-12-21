#include<stdio.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int val){

}

void inorder(struct node *root){
    
}

int main(){
    struct node *root = NULL;

    insert(root, 10);
    insert(root, 20);
    insert(root, 30);

    inorder(root);
}