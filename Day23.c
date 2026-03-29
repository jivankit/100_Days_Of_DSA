#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* merge(struct node* a, struct node* b) {
    if(!a) return b;
    if(!b) return a;

    struct node* result;

    if(a->data < b->data) {
        result = a;
        result->next = merge(a->next, b);
    } else {
        result = b;
        result->next = merge(a, b->next);
    }
    return result;
}