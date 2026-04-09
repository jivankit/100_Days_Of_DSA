#include <stdio.h>
#include <string.h>
#include <ctype.h>

int stack[100];
int top = -1;

void push(int val) {
    stack[++top] = val;
}

int pop() {
    return stack[top--];
}

int evalPrefix(char* expr) {
    int len = strlen(expr);
    for (int i = len - 1; i >= 0; i--) {
        char c = expr[i];
        if (isdigit(c)) {
            push(c - '0');
        } else {
            int a = pop();
            int b = pop();
            switch (c) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
    }
    return pop();
}