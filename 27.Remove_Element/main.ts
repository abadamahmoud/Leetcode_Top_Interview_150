class Solution {
     removeElement(nums: number[], val: number): number {
         let k = 0;
         for (const num of nums) {
             if (num !== val) {
                 nums[k++] = num;
             }
         }
         return k;
     }
 }
 
 const nums = [0, 1, 2, 2, 3, 0, 4, 2];
 const val = 2;
 const solution = new Solution();
 const k = solution.removeElement(nums, val);
 
 console.log("k =", k);
 console.log("Modified nums =", nums.slice(0, k));
 