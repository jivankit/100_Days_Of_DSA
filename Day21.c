#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* create(int n) {
    struct node *head = NULL, *temp, *newNode;

    for(int i = 0; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

void display(struct node* head) {
    while(head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL");
}

int main() {
    int n;
    scanf("%d", &n);

    struct node* head = create(n);
    display(head);

    return 0;
}