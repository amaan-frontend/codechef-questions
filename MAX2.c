

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    
    char binary[N + 1];
    scanf("%s", binary);

    int maxPower = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            printf("%d\n", maxPower);
            break;
        }
        maxPower++;
    }

    return 0;
}
