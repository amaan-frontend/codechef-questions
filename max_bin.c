#include <stdio.h>
#include <string.h>

#define MAX_N 1000006

// Function to maximize the decimal representation of the string
void maximizeDecimal(char *s, int n, int k) {
    for (int i = 0; i < n && k > 0; i++) {
        if (s[i] == '0') {
            if (i == 0 || s[i - 1] == '1') {
                s[i] = '1';
                k--;
            } else {
                break;
            }
        }
    }

    if (k > 0 && n > 0) {
        if (s[0] == '0') {
            s[0] = '1';
            k--;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[MAX_N];
        scanf("%s", s);

        maximizeDecimal(s, n, k);
        printf("%s\n", s);
    }

    return 0;
}
