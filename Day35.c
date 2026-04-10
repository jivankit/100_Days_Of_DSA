#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == MAX - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = val;
}

int dequeue() {
    if (front == -1 || front > rear) return -1;
    return queue[front++];
}

int peek() {
    if (front == -1 || front > rear) return -1;
    return queue[front];
}

int isEmpty() {
    return front == -1 || front > rear;
}