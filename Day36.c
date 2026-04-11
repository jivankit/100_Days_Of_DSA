#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if ((front == 0 && rear == MAX - 1) || (rear == (front - 1) % (MAX - 1)))
        return;
    else if (front == -1) {
        front = rear = 0;
        queue[rear] = val;
    } else if (rear == MAX - 1 && front != 0) {
        rear = 0;
        queue[rear] = val;
    } else {
        queue[++rear] = val;
    }
}

int dequeue() {
    if (front == -1) return -1;
    int data = queue[front];
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
    return data;
}