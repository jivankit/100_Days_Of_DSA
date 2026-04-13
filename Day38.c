#include <stdio.h>
#define MAX 100

int deque[MAX];
int front = -1;
int rear = -1;

void insertFront(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) return;
    if (front == -1) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front--;
    }
    deque[front] = val;
}

void insertRear(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) return;
    if (front == -1) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }
    deque[rear] = val;
}

int deleteFront() {
    if (front == -1) return -1;
    int val = deque[front];
    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
    return val;
}

int deleteRear() {
    if (front == -1) return -1;
    int val = deque[rear];
    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear--;
    }
    return val;
}

int getFront() {
    if (front == -1) return -1;
    return deque[front];
}

int getRear() {
    if (front == -1) return -1;
    return deque[rear];
}