function removeDuplicates(nums: number[]): number {
     let k = 0; // Pointer for the next valid position
     for (const num of nums) {
         if (k < 2 || num !== nums[k - 2]) {
             nums[k++] = num;
         }
     }
     return k; // Number of valid elements
 }
 
 // Example usage
 const nums = [0, 0, 1, 1, 1, 1, 2, 3, 3];
 const k = removeDuplicates(nums);
 console.log("Unique count:", k); // Output: 7
 console.log("Modified array:", nums.slice(0, k)); // Output: [0, 0, 1, 1, 2, 3, 3]
 