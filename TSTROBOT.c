#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X); // Read N and X for each test case
        
        char S[N + 1];
        scanf("%s", S); // Read the string S
        
        int position = X; // Initialize the robot's position
        
        // Create an array to keep track of visited points
        int visited[2000002] = {0}; // Using a large array size to handle constraints
        
        visited[position + 1000000] = 1; // Mark the initial position as visited
        
        // Loop through each command in the string S
        for (int i = 0; i < N; i++) {
            if (S[i] == 'L') {
                position--; // Move the robot one step to the left
            } else {
                position++; // Move the robot one step to the right
            }
            visited[position + 1000000] = 1; // Mark the new position as visited
        }
        
        // Count the number of distinct points visited
        int count = 0;
        for (int i = 0; i < 2000002; i++) {
            if (visited[i]) {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}


