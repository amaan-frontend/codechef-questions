#include <stdio.h>
#include <string.h>

// Function to check if strings A and B can be made equal from S
char* canMakeEqual(char* S, int N) {
    int freq[26] = {0}; // Frequency of each character in S
    
    // Count the frequency of each character in S
    for (int i = 0; i < N; i++) {
        freq[S[i] - 'a']++;
    }
    
    int A_freq[26] = {0}; // Frequency of each character in string A
    int B_freq[26] = {0}; // Frequency of each character in string B
    
    // Process characters from S to build A and B
    for (int i = 0; i < N; i++) {
        A_freq[S[i] - 'a']++;
        
        // Check if A can be equal to S so far
        int canEqual = 1;
        for (int j = 0; j < 26; j++) {
            if (A_freq[j] > freq[j]) {
                canEqual = 0;
                break;
            }
        }
        
        // If A can be equal to S so far, then B will be the remaining characters in S
        if (canEqual) {
            for (int j = 0; j < 26; j++) {
                B_freq[j] = freq[j] - A_freq[j];
            }
            
            // Check if B can be equal to S
            int canMake = 1;
            for (int j = i + 1; j < N; j++) {
                if (B_freq[S[j] - 'a'] > 0) {
                    B_freq[S[j] - 'a']--;
                } else {
                    canMake = 0;
                    break;
                }
            }
            
            if (canMake) {
                return "YES";
            }
        }
    }
    
    return "NO";
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        char S[N + 1]; // +1 for the null terminator
        scanf("%s", S);
        
        printf("%s\n", canMakeEqual(S, N));
    }
    
    return 0;
}

