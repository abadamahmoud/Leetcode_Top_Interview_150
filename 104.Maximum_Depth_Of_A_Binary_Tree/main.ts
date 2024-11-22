class TreeNode {
     val: number;
     left: TreeNode | null;
     right: TreeNode | null;
     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
         this.val = val === undefined ? 0 : val;
         this.left = left === undefined ? null : left;
         this.right = right === undefined ? null : right;
     }
 }
 
 class Solution {
     public maxDepth(root: TreeNode | null): number {
         if (root === null) {
             return 0;
         }
         const leftDepth = this.maxDepth(root.left);
         const rightDepth = this.maxDepth(root.right);
         return Math.max(leftDepth, rightDepth) + 1;
     }
 }
 
 const root = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
 const solution = new Solution();
 console.log("Maximum Depth:", solution.maxDepth(root)); // Output: 3
 