#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

struct node* insertEnd(struct node* head, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL) {
        newNode->prev = NULL;
        return newNode;
    }

    struct node* temp = head;
    while(temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

void display(struct node* head) {
    while(head) {
        printf("%d ", head->data);
        head = head->next;
    }
}