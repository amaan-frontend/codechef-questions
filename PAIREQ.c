#include <stdio.h>

int minOperationsToEqualize(int arr[], int n) {
    int maxCount = 0, maxNum = arr[0];

    // Find the number with maximum occurrences
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxNum = arr[i];
        }
    }

    // Count the number of elements different from maxNum
    int countDiff = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != maxNum) {
            countDiff++;
        }
    }

    return countDiff;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int minOperations = minOperationsToEqualize(arr, n);
        printf("%d\n", minOperations);
    }

    return 0;
}
