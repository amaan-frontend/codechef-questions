
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if a character is an operator
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// Function to get the precedence of an operator
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Function to convert infix expression to RPN
void infixToRPN(char *expression) {
    int len = strlen(expression);
    char stack[len];
    int stackTop = -1;

    for (int i = 0; i < len; i++) {
        if (expression[i] >= 'a' && expression[i] <= 'z') {
            printf("%c", expression[i]);
        } else if (expression[i] == '(') {
            stack[++stackTop] = '(';
        } else if (expression[i] == ')') {
            while (stackTop >= 0 && stack[stackTop] != '(') {
                printf("%c", stack[stackTop--]);
            }
            stackTop--; // Pop '(' from the stack
        } else if (isOperator(expression[i])) {
            while (stackTop >= 0 && precedence(stack[stackTop]) >= precedence(expression[i])) {
                printf("%c", stack[stackTop--]);
            }
            stack[++stackTop] = expression[i];
        }
    }

    while (stackTop >= 0) {
        printf("%c", stack[stackTop--]);
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        char expression[401];
        scanf("%s", expression);
        infixToRPN(expression);
        printf("\n");
    }

    return 0;
}
