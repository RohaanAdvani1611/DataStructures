#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
#include "SLL.h"

void init_SLL(list *l) {
    *l = NULL;
    return;
}

void append(list *l, int d) {
    node *p, *newnode;
    newnode = (node*)malloc(sizeof(node));
    if(newnode){
        newnode->data = d;
        newnode->next = NULL;
    }
    else return;
    if(*l == NULL){
        *l = newnode;
        return;
    }
    p = *l;
    while(p -> next) {
       p = p->next;
    }
    p->next = newnode;
    return;
}

void traverse(list l) {
    printf("[");
    node *p;
    p = l;
    while(p){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("]\n");
    return;
}

// even nodes of the linked list 
struct node* reverse_even(struct node* head, struct node* prev) { 
  
    // Check for empty list 
    if (head == NULL) 
        return NULL; 
    //Declare temp pointers
    struct node* temp; 
    struct node* curr; 
    curr = head; 
  
    // Reversing nodes until curr node's value 
    // turn odd or Linked list is fully traversed 
    while (curr != NULL && curr->data % 2 == 0) { 
        temp = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = temp; 
    } 
  
    // If elements were reversed then head 
    // pointer needs to be changed 
    if (curr != head) { 
  
        head->next = curr; 
  
        // Recur for the remaining linked list 
        curr = reverse_even(curr, NULL); 
        return prev; 
    } 
  
    // Simply iterate over the odd value nodes 
    else { 
        head->next = reverse_even(head->next, head); 
        return head; 
    } 
} 