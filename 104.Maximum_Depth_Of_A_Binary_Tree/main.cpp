#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode
{
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
     int maxDepth(TreeNode *root)
     {
          if (!root)
               return 0;
          int leftDepth = maxDepth(root->left);
          int rightDepth = maxDepth(root->right);
          return max(leftDepth, rightDepth) + 1;
     }
};

int main()
{
     TreeNode *root = new TreeNode(3);
     root->left = new TreeNode(9);
     root->right = new TreeNode(20);
     root->right->left = new TreeNode(15);
     root->right->right = new TreeNode(7);

     Solution solution;
     cout << "Maximum Depth: " << solution.maxDepth(root) << endl; // Output: 3

     return 0;
}
