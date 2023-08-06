#include <stdio.h>
#include <stdbool.h>

#define MAX_USERS_ADMINS 100000

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);

        int attempts[MAX_USERS_ADMINS + 1] = {0}; // Initialize an array to store the number of attempts for each user/admin
        int user, disqualified_count = 0;

        for (int i = 0; i < k; i++) {
            scanf("%d", &user);
            attempts[user]++;
        }

        printf("%d ", disqualified_count);

        for (int i = 1; i <= n + m; i++) {
            if (attempts[i] > 1) {
                printf("%d ", i);
                disqualified_count++;
            }
        }

        printf("\n");
    }

    return 0;
}
