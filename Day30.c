#include <stdio.h>
#include <stdlib.h>

struct node {
    int coeff, power;
    struct node* next;
};

struct node* insert(struct node* head, int c, int p) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->coeff = c;
    newNode->power = p;
    newNode->next = NULL;

    if(head == NULL)
        return newNode;

    struct node* temp = head;
    while(temp->next)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

void display(struct node* head) {
    while(head) {
        printf("%dx^%d", head->coeff, head->power);
        if(head->next) printf(" + ");
        head = head->next;
    }
}