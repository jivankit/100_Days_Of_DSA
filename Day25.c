#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int countOccurrences(struct node* head, int key) {
    int count = 0;
    while(head) {
        if(head->data == key)
            count++;
        head = head->next;
    }
    return count;
}