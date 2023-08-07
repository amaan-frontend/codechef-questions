#include <stdio.h>
#include <string.h>

// Function to count the number of different country codes in a string
int countCountryCodes(char *s) {
    int count = 0;
    int len = strlen(s);

    // Iterate through the string
    for (int i = 0; i < len - 1; i++) {
        count++; // Increment count for every 2-letter substring
    }

    return count;
}

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        char s[10005]; // Assuming maximum length of string as per the constraint
        scanf("%s", s); // Input string
        int result = countCountryCodes(s);
        printf("%d\n", result); // Output the count of different country codes
    }

    return 0;
}
