#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int getLength(struct node* head) {
    int len = 0;
    while(head) {
        len++;
        head = head->next;
    }
    return len;
}

struct node* findIntersection(struct node* a, struct node* b) {
    int lenA = getLength(a);
    int lenB = getLength(b);

    int diff = abs(lenA - lenB);

    if(lenA > lenB) {
        while(diff--) a = a->next;
    } else {
        while(diff--) b = b->next;
    }

    while(a && b) {
        if(a == b)
            return a;
        a = a->next;
        b = b->next;
    }

    return NULL;
}