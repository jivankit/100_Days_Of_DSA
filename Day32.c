#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top < MAX - 1) {
        stack[++top] = val;
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return -1;
}