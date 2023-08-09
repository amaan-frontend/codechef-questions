#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reverse = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    
    return originalNum == reverse;
}

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Input number
        scanf("%d", &N);

        if (isPalindrome(N)) {
            printf("wins\n");
        } else {
            printf("loses\n");
        }
    }

    return 0;
}
