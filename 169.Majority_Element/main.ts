function majorityElement(nums: number[]): number {
     let candidate = 0, count = 0;
     for (const num of nums) {
         if (count === 0) {
             candidate = num;
         }
         count += (num === candidate) ? 1 : -1;
     }
     return candidate;
 }
 
 // Example usage
 const nums1 = [3, 2, 3];
 const nums2 = [2, 2, 1, 1, 1, 2, 2];
 
 console.log("Majority element in nums1:", majorityElement(nums1)); // Output: 3
 console.log("Majority element in nums2:", majorityElement(nums2)); // Output: 2
 