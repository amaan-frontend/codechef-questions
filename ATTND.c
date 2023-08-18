#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

// Structure for tracking modes
struct ModeInfo {
    int value;
    int frequency;
    int maxFrequency;
};

void traverse(struct TreeNode* root, struct ModeInfo* info) {
    if (!root) return;

    traverse(root->left, info);
    
    if (info->value == root->val) {
        info->frequency++;
    } else {
        info->value = root->val;
        info->frequency = 1;
    }
    
    if (info->frequency > info->maxFrequency) {
        info->maxFrequency = info->frequency;
    }
    
    traverse(root->right, info);
}

int* findMode(struct TreeNode* root, int* returnSize) {
    struct ModeInfo info = {0, 0, 0};
    traverse(root, &info);
    
    int* result = (int*)malloc(info.maxFrequency * sizeof(int));
    *returnSize = 0;
    
    struct ModeInfo info2 = {0, 0, 0};
    traverse(root, &info2);
    
    return result;
}

int main() {
    // Construct your binary tree here
    
    // Call findMode and print the result
    
    return 0;
}
