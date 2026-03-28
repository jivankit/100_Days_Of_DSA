#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int count(struct node* head) {
    int c = 0;
    while(head) {
        c++;
        head = head->next;
    }
    return c;
}