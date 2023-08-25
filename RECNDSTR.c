#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[1000005];
        scanf("%s", s);

        int len = strlen(s);

        // Check for the case where the string consists of the same character
        int is_same_char = 1;
        for (int i = 1; i < len; i++) {
            if (s[i] != s[0]) {
                is_same_char = 0;
                break;
            }
        }

        // If all characters are the same, then Chef can choose V = S
        if (is_same_char) {
            printf("YES\n");
            continue;
        }

        // Otherwise, Chef can choose V as the reverse of S
        int is_valid = 1;
        for (int i = 0; i < len; i++) {
            if (s[i] != s[len - i - 1]) {
                is_valid = 0;
                break;
            }
        }

        if (is_valid) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

