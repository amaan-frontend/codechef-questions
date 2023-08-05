#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10001

// Function to check if it's possible to print the given string
// while following the country's rules
int canPrintString(const char* s) {
    int n = strlen(s);
    char stack[MAX_LENGTH];
    int top = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            stack[++top] = '0';
        } else {
            if (top == -1) {
                return 0; // Invalid input, '1' without matching '0'
            }

            stack[top] = '1';
            top--;
        }
    }

    return top == -1;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char s[MAX_LENGTH];
        scanf("%s", s);

        if (canPrintString(s)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
