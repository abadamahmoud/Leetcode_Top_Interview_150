function removeDuplicates(nums: number[]): number {
     let k = 0; // Index for the next unique element
     for (let i = 1; i < nums.length; i++) {
         if (nums[i] !== nums[k]) {
             k++;
             nums[k] = nums[i];
         }
     }
     return k + 1; // Return the count of unique elements
 }
 
 // Example usage
 const nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
 const k = removeDuplicates(nums);
 console.log("Unique count:", k); // Output: 5
 console.log("Modified array:", nums.slice(0, k)); // Output: [0, 1, 2, 3, 4]
 