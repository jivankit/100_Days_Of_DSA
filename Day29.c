#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* rotate(struct node* head, int k) {
    if(!head || !head->next) return head;

    int len = 1;
    struct node* temp = head;

    while(temp->next) {
        temp = temp->next;
        len++;
    }

    temp->next = head; // make circular

    k = k % len;
    int steps = len - k;

    while(steps--)
        temp = temp->next;

    head = temp->next;
    temp->next = NULL;

    return head;
}