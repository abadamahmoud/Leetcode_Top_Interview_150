#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node
struct TreeNode
{
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
};

// Function to find the maximum depth of the binary tree
int maxDepth(struct TreeNode *root)
{
     if (!root)
          return 0;
     int leftDepth = maxDepth(root->left);
     int rightDepth = maxDepth(root->right);
     return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
}

// Helper function to create a new tree node
struct TreeNode *createNode(int value)
{
     struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
     newNode->val = value;
     newNode->left = NULL;
     newNode->right = NULL;
     return newNode;
}

int main()
{
     struct TreeNode *root = createNode(3);
     root->left = createNode(9);
     root->right = createNode(20);
     root->right->left = createNode(15);
     root->right->right = createNode(7);

     printf("Maximum Depth: %d\n", maxDepth(root)); // Output: 3
     return 0;
}
