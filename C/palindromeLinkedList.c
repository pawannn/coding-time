#include<stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head){
    struct ListNode *current = head;
    struct ListNode *nextNode, *prevNode = NULL;
    int res = 0, rev = 0;
    while(current != NULL){
        res = res*10;
        res += current -> val;
        
        nextNode = current -> next;
        current -> next = prevNode;
        
        prevNode = current;
        current = nextNode;
    }
    current = prevNode;
    while(current != NULL){
        rev = rev * 10;
        rev += current -> val;
        current = current -> next;
    }
    return res == rev;
}

int main(){
    struct ListNode *head, *middle, *tail;
    head = malloc(sizeof(struct ListNode));
    middle = malloc(sizeof(struct ListNode));
    tail = malloc(sizeof(struct ListNode));

    head -> val = 1;
    head -> next = middle;

    middle -> val = 2;
    middle -> next = tail;

    tail -> val = 1;
    tail -> next = NULL;

    printf("%d", isPalindrome(head));

    return 0;
}